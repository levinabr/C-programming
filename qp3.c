#include <stdio.h>
int main()
{
int n,i=1;
printf("Enter the number : \n");
scanf("%d",&n);
while(i<=n)
{
if(n%i==0)
{
printf("%d\n",i);
}
i++;
}

return 0;
}
