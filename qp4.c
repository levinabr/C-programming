#include<stdio.h>
int main()
{
int isprime,upper,lower,i,j;
printf("Enter the upper limit");
scanf("%d",&upper);
printf("Enter the lower limit");
scanf("%d",&lower);
for(i=lower;i<upper;i++)
{
if(i<2){
continue;
}
isprime=1;
for(j=2;j<i;j++)
{
if(i%j==0)
{
isprime=0;
break;
}
}
if(isprime)
{
printf("%d\n",i);
}
}
printf("\n");
return 0;

}
