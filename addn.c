#include<stdio.h>
void noofterms(int*n)
{
    printf("enter the no. of terms\n");
    scanf("%d",n);
}
void input(int n,int a[n])
{
    printf("enter the terms\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int find_sum(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void output(int sum)
{
    printf("the sum of numbers is %d\n",sum);
}
void main()
{
    int n,sum;
    noofterms(&n);
    int a[n];
    input(n,a);
    sum = find_sum(n,a);
    output(sum);
}
