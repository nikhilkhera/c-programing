#include<stdio.h>
void get_input(float *n,float *r)
{
    printf("enter the values of n and r\n");
    scanf("%f%f",n,r);
}
float find_ncr(float n, float r)
{
    float ncr=1.0;
    while(r>0)
    {
        ncr=ncr*(n/r);
        n--;
        r--;
    }
    return ncr;
}
void get_output(float n,int r, float ncr)
{
    printf("the vlue of %fC%f is %f",n,r,ncr);
}
void main()
{
    float n,r;
    float ncr;
    get_input(&n,&r);
    ncr=find_ncr(n,r);
    get_output(n,r,ncr);
}
