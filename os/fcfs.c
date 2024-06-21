#include <stdio.h>
#include<stdlib.h>
void TT(int n,int bt[],int at[])
{
         
    int ct[n];
    for(int i=0;i<n;i++)
    {
        ct[i]=bt[i]-at[i];
   
        printf("ct[i]: %d", ct[i]);
        printf("\n");
    }
}
int main()
{
    int n;
    printf("enter the Number of processes:");
    scanf("%d",&n);
    int bt[n],at[n];
    printf("enter the burst time for all the processes:");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
       
    }

    printf("enter the arrival time for all the processes:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }
    TT(n,bt,at);
    return 0;
}