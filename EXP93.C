/*Following */
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    printf("Enter first string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter second string: ");
    fgets(s2,sizeof(s2),stdin);
    strcat(s1,s2);
    printf("Concatenated string: %s",s1);
   
}
