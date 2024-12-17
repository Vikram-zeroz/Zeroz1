#include<stdio.h>
int main()
{
    int *p1; 
    int i;
    int arr1[20];
    for ( i=0;i<10;i++)
   { 
    printf("Enter The [%d]element ",i);
    scanf("%d",&arr1[i]);
   }
for(i=0;i<10;i++)
{
    p1=&arr1[i];
    printf("The [%d] Element is:%d\n",i,*p1);
}
}
