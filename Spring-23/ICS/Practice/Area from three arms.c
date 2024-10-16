#include<stdio.h>
int main(){
double a,b,c,s,area;
printf("Enter value of three arms=");
scanf("%lf %lf %lf",&a,&b,&c);

s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));

printf("The area is=%lf\n",area);

return 0;
}
