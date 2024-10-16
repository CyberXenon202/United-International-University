//check lowest number
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three numbers=");
scanf("%d %d %d",&a,&b,&c);

if(a<b && a<c){
	printf("The lowest number is a=%d",a);
}
else if(b<a && b<c){
	printf("The lowest number is b=%d",b);
}
else if(c<a && c<b){
	printf("The lowest number is c=%d",c);
}
else{
	printf("The number is equal");
}
return 0;
}
