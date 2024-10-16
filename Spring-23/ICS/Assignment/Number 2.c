//Program that will decide whethers a number is even or odd
#include<stdio.h>
int main(){
int R;
printf("Enter a value=");
scanf("%d",&R);

if(R%2==0){
	printf("Even");
}
else{ 
	printf("Odd");
}
return 0;
}
