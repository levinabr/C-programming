#include <stdio.h>
int factorial(int fact)
{
int facto=1;
for(int i=1;i<=fact;i++)
{
	facto*=i;
}
return facto;
}
int main()
{
int n,result;
printf("Enter a number");
scanf("%d",&n);
result = factorial(n);
printf("the factorial of the number %d is %d",n,result);
return 0;
}
