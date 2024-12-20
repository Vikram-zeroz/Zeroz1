#include<stdio.h>

int main ()
{
    char  str[20];
    char  str2[10];
    printf("enter your name :");
    fgets(str,sizeof(str),stdin);
    printf("enter your Age :");
    fgets(str2,sizeof(str2),stdin);
    printf("Your name is : %s",str);
    printf("Your age is : %s",str2);

}
