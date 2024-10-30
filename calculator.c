#include <stdio.h>

void main()
{
    int a,b;
    char op;
    printf("enter the operands:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case'+':printf("the sum is:%d",a+b);
        break;
        case'-':printf("the subtraction is:%d",a-b);
        break;
        case'*':printf("the multiplication is:%d",a*b);
        break;
        case'/':printf("the division is:%d",a/b);
        break;
        case'%':printf("the modulus is:%d",a%b);
        break;
        default:printf("invalid operator");
        break;
    }
}
