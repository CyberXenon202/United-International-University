#include<stdio.h>
int main(){
float a,b,c;
 b=0;
 c=0;

printf("Enter the height value=");
scanf("%d",&a);

b=a/100;
c=b-(a*100);

printf("a=%f eter %f entimeter",b,c);


return 0;
}
