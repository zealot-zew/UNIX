// command cp (copy)

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define POSIX
#define POSIX_O_SOURCE 199309L

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        perror("Too few arguments");
        return -1;
    }

    int fd1, fd2, n;
    char buf[2];

    fd1 = open(argv[1], O_RDONLY);
    fd2 = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, 777);

    if (fd1 == -1 || fd2 == -1)
    {
        perror("unable to open files");
        return -1;
    }

    while ((n = read(fd1, buf, 1)) > 0)
    {
        write(fd2, buf, 1);
    }

    close(fd1);
    close(fd2);
}