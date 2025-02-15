// Write to read form key board and print it on the console using read write API
#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
int main()
{
    int fd1, n;
    char buf1[2];
    while ((n = read(0, buf1, 1)) > 0)
        write(1, buf1, 1);
    // printf("%c",buf1);
    return 0;
}
