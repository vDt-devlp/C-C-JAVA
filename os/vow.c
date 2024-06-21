#include <stdio.h>
#include<string.h>
#include<unistd.h>  
int main(int argc,char **argv)  
{  
   int i=0, count = 0;
   for(i=0;i<strlen(argv[1]);i++)
   {
       if(argv[1][i]=='a'|| argv[1][i]=='e'|| argv[1][i]=='i'|| argv[1][i]=='o'|| argv[1][i]=='u')
       {
           count++;
       }

   }
   return 0;
}