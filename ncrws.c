#include<stdio.h>
void get_input(int *n,int *r)
{
    printf("enter the values of n and r\n");
    scanf("%d%d",n,r);
}
float find_ncr(int  n, int r)
{ 
    int x;
    float ncr;
    x=n-r;
    while(n!=0 && r!=0 && x!=0)
    {
        ncr=ncr*(float)n/(r*x);
        n--;
        r--;
        x--;
        if(n!=0 && r!=0 && x!=0)
        {
            if(n==0)
            {
                n++;
            }
            if(r==0)
            {
                r++;
            }
            if(x==0)
            {
                x++;
            }
        }   
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
    ncr =find_ncr(n,r);
    get_output(n,r,ncr);
}
