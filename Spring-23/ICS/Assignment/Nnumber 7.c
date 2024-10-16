/*write a program (WAP) that will find (x to the power y)
 where x,y are positive integers  */
#include<stdio.h>
int main(){
int x,y;
printf("Enter x and y=");
scanf("%d %d",&x,&y);

double result=pow(x,y);
printf("The x to the power y is=%.2lf\n",result);

return 0;
}
