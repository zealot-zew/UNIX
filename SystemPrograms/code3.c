// Write a program to find the type of the file given as an input

#define POSIX
#define POSIX_O_SOURCE 199309L

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

struct stat statv;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        perror("Too few arguments.");
        return -1;
    }

    if (stat(argv[1], &statv) == 0)
    {
        printf("File exists\n");
    }
    else
    {
        printf("File doesnt exists\n");
        return -1;
    }

    // checking which file type
    if (S_ISDIR(statv.st_mode))
        printf("Directory File\n");
    if (S_ISCHR(statv.st_mode))
        printf("Character File\n");
    if (S_ISLNK(statv.st_mode))
        printf("Symbolic Link file\n");
    if (S_ISBLK(statv.st_mode))
        printf("Block file\n");
    if (S_ISFIFO(statv.st_mode))
        printf("FIFO or Pipe\n");
    if (S_ISREG(statv.st_mode))
        printf("Regular file\n");

    return 0;
}