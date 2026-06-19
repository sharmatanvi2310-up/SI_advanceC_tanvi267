#include<stdio.h>

int main()
{
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    int st =1;
for(int i=1;i<=2*n;i++)
{
        for(int k=1;k<=2*n-i;k++)
        {
            printf(" ");
        
        }
     
         for(int j=1;j<=st;j++)
         {
             printf("*");
         }
        
             st = st + 2;
             printf("\n");
         
     }
    
    return 0;
}
