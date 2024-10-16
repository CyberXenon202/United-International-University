#include<stdio.h>
int main(){
double a,b;
char ch;

printf("Enter any two number=");
scanf("%lf %lf",&a,&b);
printf("Enter the operator=(+,-,/,*)");
scanf("%c",ch);

switch(ch){
  case'+':{
  	printf("%lf + %lf=%lf\n",a,b,a+b);
  	break;}


}
return 0;
}
