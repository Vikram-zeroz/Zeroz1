#include<stdio.h>
#include<string.h>
int main ()
{
    char  str[20];
    printf("enter your name :");
    fgets(str,sizeof(str),stdin);
    printf("Your name is : %s",str);

}
