from collections import deque

def swap_first_two(arr: list):
    if len(arr) > 1:
        arr[0], arr[1] = arr[1], arr[0]

def add_to(src:list, dest:list):
    if not src:
        return False
    num = src.pop(0)
    dest.insert(0, num)
    return True

def rotate_arr(arr: list, dxn = 1):
    if not arr:
        return False
    
    if dxn == 1:
        num = arr.pop()
        arr.insert(0, num)
    elif dxn == -1:
        num = arr.pop(0)
        arr.append(num)
    return True

def are_opposite(m1, m2):
    if (m1 == 'pa' and m2 == 'pb') or (m1 == 'pb' and m2 == 'pa'): # pa cancels pb if they immediately follow one another
        return True
    if (m1 == 'ra' and m2 == 'rb') or (m1 == 'rb' and m2 == 'ra'): # instead having ra and rb right after one, we can combine it to rr
        return True
    if (m1 == 'rra' and m2 == 'rrb') or (m1 == 'rrb' and m2 == 'rra'): # instead having rra and rrb right after one, we can combine it to rrr
        return True
    if (m1 == 'sa' or m1 == 'sb' or m1 == 'ss') and (m2 == 'sa' or m2 == 'sb' or m2 == 'ss'): # any swaps must not immediately follow one another
        return True
    if (m1 == 'ra' and m2 == 'rra') or (m1 == 'rra' and m2 == 'ra'): # these cancels out each other
        return True
    if (m1 == 'rb' and m2 == 'rrb') or (m1 == 'rrb' and m2 == 'rb'):
        return True
    return False

def verify(moves:list, init_arr: list):
    s1, s2 = init_arr[:], []
    for move in moves:
        if move == 'sa':
            swap_first_two(s1)
        elif move == 'sb':
            swap_first_two(s2)
        elif move == 'ss':
            swap_first_two(s1)
            swap_first_two(s2)
        elif move == 'pa':
            add_to(s1, s2)
        elif move == 'pb':
            add_to(s2, s1)
        elif move == 'ra':
            rotate_arr(s1)
        elif move == 'rb':
            rotate_arr(s2)
        elif move == 'rr':
            rotate_arr(s1)
            rotate_arr(s2)
        elif move == 'rra':
            rotate_arr(s1, -1)
        elif move == 'rrb':
            rotate_arr(s2, -1)
        elif move == 'rrr':
            rotate_arr(s2, -1)
            rotate_arr(s1, -1)
    
    return s1 == sorted(init_arr)


def solve(arr: list):
    moves = ['sa', 'sb', 'ss', 'pa', 'pb', 'ra', 'rb', 'rr', 'rra', 'rrb', 'rrr']
    q = deque([[move] for move in moves])
    dis = 1
    while q:
        print(dis)
        cnt = len(q)
        for _ in range(cnt):
            current_moveset = q.popleft()
            if verify(current_moveset, arr):
                return current_moveset
            
            for move in moves:
                if are_opposite(move, current_moveset[-1]):
                    continue
                current_moveset.append(move)
                q.append(current_moveset[:])
                current_moveset.pop()
        dis += 1

if __name__ == "__main__":
    # solve([2,1,3,6,5,8])
    arr = [2, 1, 3, 6, 5, 8]
    res = solve(arr)
    # res = verify(['pa', 'pa', 'rra', 'sa', 'rr', 'pb', 'pb'], arr)
    print(res)