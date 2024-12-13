/*TO PRINT SUM OF */
#include<stdio.h>
int main()
{
    int a1[10]={2,4,6,8,10,12};
    int finder;
    printf("Enter the finder no:");
    scanf("%d",&finder);
    for (int i=0;i<10;i++)
    {
      if(a1[i]==finder)
      {
        printf("[%d] is found at %d position\n",finder,i);
      }
    }
    
}
