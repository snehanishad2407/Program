#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,remainder;
    printf("Enter value of a=");
    scanf("%d",&a);
    printf("Enter value of b=");
    scanf("%d",&b);
    remainder=a%b;
    printf("Remainder of a and b=%d",remainder);
getch();
}