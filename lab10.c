#include<stdio.h>
#define pi 3.142
#define AREA(r) (pi*r*r)
#define SURFACE(r,h) (2*pi*r*(r+h))
int main(){
float r,h,area,surface_area;
printf("Enter the Radius \n");
scanf("%f",&r);
printf("Enter the height \n");
scanf("%f",&h);
area = AREA(r);
surface_area = SURFACE(r,h);
printf("The area of circle is %2f\n",area);
printf("The area of cylinder is %2f\n",surface_area);
return 0;
}
