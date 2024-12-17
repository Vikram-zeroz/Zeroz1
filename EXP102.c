#include<stdio.h>
int main ()
{
    float *p,a;
    float *p2,b;
    printf("Enter the value of a&b respictivly: ");
    scanf("%f%f",&a,&b);
    p=&a;
    p2=&b;
    printf("The Addition of a&b is :%2f",*p+*p2);
} 
