#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    char *res;
    int fd = open("booty.txt", O_RDWR);
    if (fd == -1)
    return 0;
    res = get_next_line(100);
    while(res)
    {
        printf("%s", res);
        free(res);
        res = get_next_line(fd);
    }
}
