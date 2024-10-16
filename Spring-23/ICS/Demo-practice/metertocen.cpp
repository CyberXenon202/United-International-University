#include<stdio.h>
int main(){
int a,b,c;

printf("Enter the height value=");
scanf("%d",&a);

b=a/100;
c=a%100;

printf("a=%d meter %d centimeter",b,c);


return 0;
}
