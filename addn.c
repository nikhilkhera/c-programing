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
        scanf("%d",a[i]);
    }
}
void add(int n,int a[n],int *sum)
{
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
}
void output(int sum)
{
    printf("the sum of numbers is %d\n",sum);
}
void main()
{
    int n,a[n],sum;
    noofterms(&n);
    input(n,&a[0]);
    add(n,&a[0],&sum);
    output(sum);
}

