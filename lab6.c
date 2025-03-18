#include <stdio.h>
int main()
{ int a,b,c;
printf("Enter 1st Number ");
scanf("%d",&a);
printf("enter 2nd Number ");
scanf("%d",&b);
printf("enter 3rd Number ");
scanf("%d",&c);
if (a>b){
if(a>c){
printf("%d is largest",a);}
else{
printf("%d is largest",c);}
}
else
{
if(b>c){
printf("%d is largest ",b);
}
else{
printf("%d is largest ",c);
}
}
return 0;
}
