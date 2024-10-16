#include <stdio.h>
int main(){
double E,m,c;

printf("Enter value of mass\n");
scanf("%lf",&m);

c=3*pow(10,8);
E=m*c*c;
printf("The result is:%lf\n",E);

return 0;
}
