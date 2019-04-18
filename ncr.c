#include<stdio.h>
void get_input(int *n,int *r)
{
    printf("enter the values of n and r\n");
    scanf("%d%d",n,r);
}
float find_ncr(int  n, int r)
{
    float ncr=1.0;
    while(r>0)
    {
        ncr=ncr*n/r;
        n--;
        r--;
    }
    return ncr;
}
void get_output(int n,int r, float ncr)
{
    printf("the vlue of %dC%d is %d",n,r,(int)ncr);
}
void main()
{
    int n,r;
    float ncr;
    get_input(&n,&r);
    ncr=find_ncr(n,r);
    get_output(n,r,ncr);
