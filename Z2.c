/*TO PRINT ELEMENT IN ARAY*/
#include<stdio.h>
int main()
{
    int array1[10] , i,n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
            printf(" Enter the Elements [%d]\n",i);
            scanf("%d",&array1[i]);
    }  
    for( i=0;i<n;i++)
    {
            printf("The elements at array1[%d]: %d\n",i,array1[i]);

    }  


}
