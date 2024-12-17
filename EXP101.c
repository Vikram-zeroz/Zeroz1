#include<stdio.h>
int main ()
{
    int *p,a;
    int *p2,b;
    printf("Enter the value of a&b respictivly ");
    scanf("%d%d",&a,&b);
    p=&a;
    p2=&b;
    printf("The Addition of a&b is :",*p+*p2);
}
