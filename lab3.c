#include<stdio.h>

int main()
{
int a,b;
printf("Enter 2 numbers ");
scanf("%d,%d",&a,&b);
int value =(a>b)?a:b;
printf("The Largest Number Is %d",value);
return 0;
}
