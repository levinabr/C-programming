#include <stdio.h>
int palindrome(int n){
int orginal=n,reversed=0,reminder,num;
while(num!=0)
{
reminder = num%10;
reversed = reversed*num+reminder;
num/=10;
if (orginal==reversed){
printf(" The number is Palindrome");
}
else{
printf("Not Palindrome");
}
}
}
int main(){
int num;
printf("Enter a number :");
scanf("%d",&num);
if(palindrome(num)){
printf("The number is a palindrome number");
}
return 0;
}

