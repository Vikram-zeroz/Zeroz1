#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    printf("Enter first string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter second string%d ",strlen(s1));
}
