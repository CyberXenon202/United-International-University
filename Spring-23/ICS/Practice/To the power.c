#include<stdio.h>
int main(){
int x,y;
double result;
printf("Enter the value of x and y=");
scanf("%d %d",&x,&y);

result=pow(x,y);

printf("X to the power Y=%.2f\n",result);

return 0;
}
