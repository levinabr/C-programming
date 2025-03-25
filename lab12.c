//swapping og 2 numbers using macro
#include<stdio.h>
#define swap(x,y) {int temp=x; x=y; y=temp;}
int main(){
int x,y;
printf("Enter the first Number :");
scanf("%d",&x);
printf("Enter the second Number :");
scanf("%d",&y);
printf("Before Swapping a= %d b= %d \n",x,y);
swap(x,y);
printf("After Swappng a=%d b=%d  \n",x,y);
return 0;
}
