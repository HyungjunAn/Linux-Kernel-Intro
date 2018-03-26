#include <unistd.h>
#include <stdio.h>

int main()
{ 
    int pid;
    pid = fork();
    if (pid == 0)
    {
        /* This is child process */
        printf("I am Child \n");
        // execlp("/bin/date", "/bin/date", (char *) 0);
    }
    else
    {
    /* This is parent process */
        //wait();
        /*-----------------------------------------------------------
         * wait(): parent sleepschild run to completionparent resume
         * wait(2): is omitted, parent runs concurrently with child
         ------------------------------------------------------------*/

        printf("I am Parent\n");
    }

}

/* How Does Work ---------------
$ gcc fork.c
$ ./a.out
> I am Parent
> I am child
-------------------------------*/
