#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
       for(j=5;j>=i;j--)
      {
       printf("*");
      } 
     printf("\n");
    }

    for(i=1;i<=5;i++)
    {
       for(j=i;j<=5;j++)
      {
       printf("*");
      } 
     printf("\n");
    }

    for(i=1;i<=5;i++)
    {
       for(j=i;j<=5;j++)
      {
       printf("%d",i);
      } 
     printf("\n");
    }
    for(i=1;i<=5;i++)
    {
       for(j=i;j<=5;j++)
      {
       printf("%d",j);
      } 
     printf("\n");
    }
    
    return 0;

}