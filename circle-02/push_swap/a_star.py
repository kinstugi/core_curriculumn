from collections import deque

#stack manipulation funcs
def rotate_arr(arr: deque, direction = 1):
    if len(arr) < 2:
        return
    if direction == 1:
        top = arr.pop()
        arr.appendleft(top)
    else:
        top = arr.popleft()
        arr.append(top)

def transfer_top(src: deque, dest: deque):
    if not src: return
    top = src.popleft()
    dest.appendleft(top)

def first_two(a: deque):
    if len(a) < 2:
        return
    a[0],a[1] = a[1], a[0]
#end of stack funcs

def get_min_sort_moves(s1: deque, min_num: int)->list:
    res = []
    i = 0
    while s1[i] != min_num:
        i += 1
    left, right = i, len(s1) - i
    if left < right:
        if left != 1:
            res.extend(['rra'] * left)
        else:
            res.append('sa')
    else:
        res.extend(['ra'] * right)
    return res

def rem_sorted(a:deque, sorted_arr:list)->bool:
    res = list(a) == sorted(list(a))
    return res

def execute_move(move: str, a:deque, b:deque):
    if move == 'ra':
        rotate_arr(a)
    elif move == 'rra':
        rotate_arr(a, -1)
    elif move == 'pb':
        transfer_top(a, b)
    elif move == 'pa':
        transfer_top(b, a)
    elif move == 'sa':
        first_two(a)

def solve(arr:list)->list:
    res = []
    sorted_arr = sorted(arr)
    a, b = deque(arr[:]), deque([])
    current_min_idx = 0 

    while True:
        if rem_sorted(a, sorted_arr):
            cnt = len(b)
            for _ in range(cnt):
                execute_move('pa', a, b) # no need to execute but for debug purpose
                res.append('pa')
            break
        moves = get_min_sort_moves(a, sorted_arr[current_min_idx])
        moves.append('pb')
        for move in moves:
            if rem_sorted(a, sorted_arr):
                break
            res.append(move)
            execute_move(move, a, b)
        current_min_idx += 1
    return res

if __name__ == "__main__":
    arr = [5,2,3,1,-5,6]
    res = solve(arr)
    print(len(res), "<<<<<<<")
    print(res)