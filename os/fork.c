#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
        int pid_0,pid_1,pid_2;

        pid_0=fork();
        if(pid_0==0)
        {
                sleep(3);
                printf("Child1 whose pid=%d and parent pid=%d\n",getpid(),getppid());
        }
        else
        {
                pid_1=fork();
                if(pid_1==0)
                {
                        sleep(2);
                        printf("Child2 whose pid=%d and parent pid=%d\n",getpid(),getppid());
                }
                else
                {
                        pid_2=fork();
                        if(pid_2==0)
                                printf("Child3 whose pid=%d and parent pid=%d\n",getpid(),getppid());
                        else
                        {
                                sleep(3);
                                printf("Parent pid=%d\n",getpid());
                        }
                }
        }
        return 0;
}