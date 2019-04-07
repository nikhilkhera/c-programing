#include<stdio.h>
void get_input(int *n1,int*d1,int*n2,int*d2)
{
    printf("enter the expression\n");
    scanf("%d/%d+%d/%d",n1,d1,n2,d2);
}
int find_gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}
void find_sum(int n1, int d1, int n2, int d2,int*nume,int*deno)
{
    int cf;
    if(d1==0||d2==0)
    {
        printf("addition not possible\n");
    }
    else
    {

        *nume=n1*d2+n2*d1;
        *deno=d1*d2;
        cf=find_gcd(*nume,*deno);
        *nume=*nume/cf;
        *deno=*deno/cf;
    }
     


}
void get_output(int nume,int deno)
{
    printf("%d/%d",nume,deno);
}
void main()
{
    int n1,d1,n2,d2,nume,deno;
    get_input(&n1,&d1,&n2,&d2);
    find_sum(n1,d1,n2,d2,&nume,&deno);
    get_output(nume,deno);
}
