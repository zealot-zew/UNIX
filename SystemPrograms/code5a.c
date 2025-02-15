// a) Command cat

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int fd, n;
    char buf[2];

    if (argc < 2)
    {
        perror("too few arguments");
        return -1;
    }

    for (int i = 1; i < argc; i++)
    {
        if ((fd = open(argv[i], O_RDONLY)) == -1)
        {
            perror(argv[i]);
            continue;
        }

        while ((n = read(fd, buf, 1)) > 0)
        {
            write(1, buf, 1);
        }
        close(fd);
    }
    return 0;
}
