#include<stdio.h> 
#include<stdlib.h>
void WT( int n,int burst[],int wait[]) 
{
    for(int i=1;i<n;i++)
    {
    wait[i]=burst[i-1]+wait[i-1]; 
    }
}
void RT(int n,int burst[],int wait[],int response[]) 
{ 
    response[0]=0;
    for (int i=1;i<n;i++) 
    {
    response[i]=burst[i-1]+wait[i-1] ;
    }
}
void TT(int n,int burst[],int wait[],int turn[]) 
{ 
    for (int i=0;i<n;i++) 
    {
    turn[i] =burst[i]+wait[i]; 
    }
}
void display(int n,int burst[])
{ 
    int wait[n],turn[n],response[n];
    int total_wait=0,total_turn=0,total_response=0 ; 
    WT( n, burst, wait); 
    TT( n, burst, wait, turn); 
    RT( n, burst, wait, response); 
    for (int i=0; i<n; i++)
    { 
    total_wait += wait[i];
    total_turn += turn[i]; 
    total_response += response[i]; 
    }

    printf("\nAverage WAITING time:%d\n",(total_wait/n));
    printf("Average TURNAROUND time:%d\n",(total_turn/n)); 
    printf("Average RESPONSE time:%d",(total_response/n));  
}
int main() 
{   
    int n; 
        printf("Enter the number of processes:"); 
        scanf("%d",&n); 
    int bt[n],at[n]; 
        for(int i=0;i<n;i++)
        {           
            printf("Enter the burst time for process %d :",i); 
            scanf("%d",&bt[i]); 
        }
        for(int i=0;i<n;i++)
        {
            printf("enter the arrival time for all the processes %d:",i);
            scanf("%d",&at[i]);
        }
    display(n, bt); 
    return 0; 
}
