#include <stdio.h>
#include <string.h>
int main()
{
char string1[20],string2[20];
printf("Enter the First String \n");
scanf("%s",string1);
printf("Enter the second string \n");
scanf("%s",string2);
if(strcmp(string1,string2)==0)
{
printf("the strings are equal");
}
else
{
printf("the strings are not equal");
}
return 0;
}

