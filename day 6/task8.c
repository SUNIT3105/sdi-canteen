#include<stdio.h>
int main()
{
    int a=4,b=5,i;
    printf("enter the number");
    a=a^b;
    b=a^b;
    a=a^b;
    printf("swap %d %d",a,b);
    return 0;
}