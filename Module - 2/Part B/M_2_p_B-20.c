/*
Write a C program to print
the following pattern.
1
22
333
4444
*/
#include<stdio.h>

int main(void)
{
    int n,i,j;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}