#include <stdio.h>
 
int main() 
{
      int arrival_time[10], burst_time[10], temp[10];
      int i,n, smallest, count = 0, m;
      double wait_time = 0, turnaround_time = 0,response_time= 0, end;
      float average_waiting_time, average_turnaround_time,average_response_time;
      printf("\nEnter the Total Number of Processes:\t");
      scanf("%d", &n); 
     
      for(i = 0; i < n; i++)
      {
            printf("\nEnter Arrival Time for process P%d:",i+1);
            scanf("%d", &arrival_time[i]);
            printf("Enter Burst Time for the process P%d:",i+1);
            scanf("%d", &burst_time[i]); 
            temp[i] = burst_time[i];
      }
      
      for(m = 0; count != n; m++)
      {
            smallest = 9;
            for(i = 0; i < n; i++)
            {
                  if(arrival_time[i] <= m && burst_time[i] < burst_time[smallest] && burst_time[i] > 0)
                  {
                        smallest = i;
                  }
            }
            burst_time[smallest]--;
            if(burst_time[smallest] == 0)
            {
                  count++;
                  end = m + 1;
                  wait_time = wait_time + end - arrival_time[smallest] - temp[smallest];
                  turnaround_time = turnaround_time + end - arrival_time[smallest];
                  response_time = response_time + end - arrival_time[smallest];
            }
      }
      average_waiting_time = wait_time / n; 
      average_turnaround_time = turnaround_time / n;
      average_response_time = response_time/n;
      printf("\nAverage Waiting Time:%f", average_waiting_time);
      printf("\nAverage Turnaround Time:%f", average_turnaround_time);
      printf("\nAverage Response Time:%f\n", average_response_time);
      
      return 0;
}