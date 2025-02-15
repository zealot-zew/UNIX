// Write a program to create a file with 10 bytes of data from the beginning and 10 bytes of data from offset of 48 and display the
// contents of the file.

#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int fd, n;
    char buf[2];

    if ((fd = open("file.txt", O_RDWR | O_CREAT)) == -1)
    {
        perror(" ");
        return -1;
    }

    write(fd, "First 10 bytes in the file", strlen("First 10 bytes in the file"));

    lseek(fd, 48, SEEK_CUR);

    write(fd, "second 10 bytes in the file", strlen("second 10 bytes in the file"));

    lseek(fd, 0, SEEK_SET);

    while ((n = read(fd, buf, 1)) > 0)
    {
        write(1, buf, 1);
    }
    close(fd);
    return 0;
}