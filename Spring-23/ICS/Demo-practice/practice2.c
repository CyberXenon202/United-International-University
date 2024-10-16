#include<stdio.h>
int main(){
int a,b,c;
printf("Enter value=");
scanf("%d %d",&a,&b);

if(a>b){
	printf("%d is grater than %d",a,b);
}
else{
	printf("%d is less than %d",a,b);
}

return 0;
}
