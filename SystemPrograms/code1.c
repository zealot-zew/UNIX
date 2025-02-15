// Write a program to read a file and display it on the console

// directives
#define POSIX
#define POSIX_C_SOURCE 199309L
// libraries

#include <stdio.h>
#include <unistd.h> //for read and write
#include <sys/types.h>
#include <fcntl.h> //for O_RDONLY and O_WRONLY

// main function
int main(int argc, char *argv[])
{
    int n, fd1;
    char buf1[2]; // 2 bytes of buffer for temp storage

    if (argc < 2)
    {
        perror("Too few arguments.");
        return -1;
    }

    fd1 = open(argv[1], O_RDONLY); // opening a file in readonly mode
    if (fd1 == -1)                 // -1 if cant open
    {
        perror("Unable to open file");
        return -1;
    }

    while ((n = read(fd1, buf1, 1)) > 0) // reads one byte from fd1 and stores in buf1, 0 if it reaches end of file
    {
        write(1, buf1, 1);
    }
    return 0;
}
