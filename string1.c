#include <stdio.h>
int main()
{
char string[100],temp;
int length,i,j;
printf("Enter a string \n");
scanf("%[^\n]",string);
for(length=0;string[length]!='\0';length++);
i=length-1;
for(j=0;j<length/2;j++)
{
temp=string[i];
string[i]=string[j];
string[j]=temp;
i--;
}
printf("The reversed String is : %s \n ",string);
return 0;
}
