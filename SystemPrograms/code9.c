// Write a C program to create a child process and allow the parent to display “parent” and the child to display
// “child” on the screen

#include <stdio.h>
#include <unistd.h>

int main()
{
    int result = fork();

    if (result < 0)
    {
        printf("fork failed");
    }
    else if (result == 0)
    {
        printf("I am child process, my PID is :%d, and my parent PID is: %d\n", getpid(), getppid());
    }
    else
    {
        printf("I am parent process, my PID is: %d and i created a child process with PID: %d\n", getpid(), result);
    }
    return 0;
}