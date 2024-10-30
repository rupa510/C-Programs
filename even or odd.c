#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2)
    {
       case 0: printf("number is even",&n);
       break;
       case 1: printf("number is odd",&n);
       break;
       default: printf("number is equal to 0",&n);
       break;
    }
}
