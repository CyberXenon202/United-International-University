#include<stdio.h>
int main(){
int a,b,c,sum;
float avg;

printf("Enter any three value=");
scanf("%d %d %d",&a,&b,&c);
sum=a+b+c;
avg=(float)sum/3;

printf("avg of three value=%.2f\n",avg);
return 0;
}
