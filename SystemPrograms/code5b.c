// Implement in C the following UNIX commands using system calls b) mv

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        perror("Wrong numher of aruguments");
        return -1;
    }

    if (link(argv[1], argv[2]) == -1)
    {
        perror(argv[0]);
        return -1;
    }

    if (unlink(argv[1]) == -1)
    {
        perror("Unlinking failed");
        return -1;
    }

    printf("Successful");
    return 0;
}