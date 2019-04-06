#include<stdio.h>
void getinput(int *a, int *b)
{
    printf("enter the value of 1st no.\n");
    scanf("%d",a);
    printf("enter the value of 2nd no.\n");
    scanf("%d",b);
}
int addtn(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
void getoutput(int a,int b,int c)
{
    printf("%d+%d=%d",a,b,c);
}
void main()
{
    int a,b,c;
    getinput(&a,&b);
    c=addtn(a,b);
    getoutput(a,b,c);
}

