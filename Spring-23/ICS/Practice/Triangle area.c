#include<stdio.h>
int main(){
float base, height, area;

printf("Enter any base=");
scanf("%f",&base);
printf("Enter any height=");
scanf("%f",&height);

area=(float)1/2*base*height;
printf("The area is=%.2f\n",area);

return 0;
}
