#include <stdio.h>
int func(int a,int b)
{
    return a+b;
}
int main()
{
    int a ,b,c,d,e,f;
    a=func(2,3);
    printf("sum is%d",a);
    int(*fptr)(int a , int b);
    fptr=&func ;
    printf("enter e and f");
    scanf("%d%d",&e,&f);
    d= (*fptr)(e,f);

    printf("the sum is%d",d);
}