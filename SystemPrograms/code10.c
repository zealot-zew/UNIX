// Write a program to display the area of the circle in the child's process and the find
// the area of a square in the parent process.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int r, l;
    float area, pi = 3.14;
    int result = vfork();

    if (result < 0)
    {
        printf("fork failed\n");
        return -1;
    }
    else if (result == 0)
    {
        // Child process
        printf("Enter radius of the circle: ");
        fflush(stdout);
        scanf("%d", &r);
        area = r * r * pi;
        printf("Area of circle: %f\n", area);
        printf("This is child process with PID: %d and parent PID: %d\n", getpid(), getppid());
    }
    else
    {
        // Parent process
        wait(NULL);
        printf("Enter side length of the square: ");
        fflush(stdout);
        scanf("%d", &l);
        area = l * l;
        printf("Area of square: %f\n", area);
        printf("This is parent process with PID: %d\n", getpid());
    }

    return 0;
}
