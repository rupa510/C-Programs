#include <stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    float s,area;
    printf("Enter the sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    printf("The value of S is %f",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the Triangle is %f",area);
    return 0;
}
