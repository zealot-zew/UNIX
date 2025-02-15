// Write a program to create and write Hello world to a file.

#include <stdio.h>
#include <fcntl.h>  // open
#include <unistd.h> //write and close
#include <string.h>

int main()
{
    int size;

    int fd = open("file.txt", O_WRONLY, O_CREAT, O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Unable to Open file");
        return -1;
    }

    size = write(fd, "Hello World\n", sizeof("Hello World\n"));
    if (size < 0)
    {
        perror("Error writing into file");
        return -1;
    }
    close(fd);
    return 1;
}