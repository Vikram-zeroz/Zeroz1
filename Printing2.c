/*Printing Pattern Using For loop */
#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        printf("%d ",j); /* 4
                            4 3 
                            4 3 2 */
        
        for(j=1;j<=2*i-1;j++)     
        printf("%d ",i); /* 4 4 4 4 4 4 4 
                              3 3 3 3 3 
                               2 2 2 2 
                                  1 */
      
    
        for(j=i+1;j<=n;j++)
        printf("%d ",j); /*       4 
                                3 4 
                              2 3 4 */
                              
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
     for(j=n;j>i;j--)
     printf("%d ",j); /*  4 3 2 
                          4 3 
                          4 */
     for(j=1;j<=2*i-1;j++)
     printf("%d ",i+1); /*    2 
                          3 3 3 
                        4 4 4 4 */
                        
     for(j=i+1;j<=n;j++)
     printf("%d ",j); /* 2 3 4 
                           3 4 
                             4 */
     printf("\n");


     }
}
