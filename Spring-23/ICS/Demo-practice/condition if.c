#include<stdio.h>
int main(){
int a,b,c;

printf("Enter the value=");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c){
	printf("The maximum value is a=%d",a);
}
	else if(b>a&&b>c){
		printf("The maximum value is b=%d",b);
	}
	else{
		printf("The maximum value is c=%d",c);
	}	
		
return 0;
	}
