#include<stdio.h>
int sum(int cal[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
	sum+=cal[i];
}
return sum;
}
int main(){
int i,n,result;
printf("Enter the size of the array : \n");
scanf("%d",&n);
int read[n];
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
	scanf("%d",&read[i]);
}
result=sum(read,n);
printf("The sum is %d",result);
return 0;
}

