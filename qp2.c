#include<stdio.h>
int main()
{
int n,i,sum, array[n];
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter the elements of the array");
for(i=0;i<n;i++)
{
	scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
	sum=sum+array[i];
}
	float avg;
	avg=sum/n;
	printf("the average of the elements in an array is : %2f",avg);
}
