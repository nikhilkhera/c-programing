#include<stdio.h>
void get_input(int*n)
{
    printf("enter the value of n\n");
    scanf("%d",n);
}
int find_ncr(int  n, int r)
{
    float ncr=1;
    while(r>0)
    {
        ncr=ncr*n/r;
        n--;
        r--;
    }
    return (int)ncr;
}
int find_sum(int n)
{ 
    int sum=0;
    for(int i=0;i<n+1;i++)
    {   
       sum=sum+find_ncr(n,i);
    }
    return sum;
}
void get_output(int n,int sum)
{
    for (int i=0;i<n;i++)
    printf("%dC%D+",n,i);
    printf("%dC%d=%d",n,n,sum);
}
void main()
{
    int n,sum;
    get_input(&n) ;
    sum=find_sum(n);
    get_output(n,sum);
}    
    
