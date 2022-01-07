#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,k=0,n,c;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter c :");
    scanf("%d",&c);
    

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c/2-i;j++)
        {
        printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>  
#include <conio.h>  
void main()  
{  
      
    int i, j, rows, k = 0;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");  
    }  
    getch();  
} */