#include<stdio.h>
int  sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);
}
int main()
{
    int  n;
    printf("Enter the number of element you want to sum up :");
      scanf("%d",&n);
     
     printf("Sum=%d",sum(n));
   
    return 0;
}
