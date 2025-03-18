#include <stdio.h>
int main()
{
int a,b,temp;
printf("Enter first number \t");
scanf("%d",&a);
printf("Enter second number \t");
scanf("%d",&b);
printf("Before swapping =  %d , %d \n",a,b);
temp = a;
 a=b;
b = temp;
printf("After Swapping  = %d , %d \n",a,b);
return 0;
}
