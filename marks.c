#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    float avg;
    printf("Enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    if(avg==90)
    {
    printf("A+");
    }
    elseif(avg==90 && avg==80)
    {
    printf("A");
    }
    elseif(avg==80 && avg==70)
    {
    printf("B");
    }
    elseif(avg==70 && avg==60)
    {
    printf("C");
    elseif(avg==60 && avg==50)
    {
    printf("D");
    elseif(below50)
    {
    printf("F");
    }
    }
    }
    
}
