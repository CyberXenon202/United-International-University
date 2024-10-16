/*Program that will read from the console a random 
positive nonzero number and determine if it is a power of 2.*/

#include<stdio.h>
int main(){
int n, r;
printf("Enter a value=");
scanf("%d",&n);

if((n&(n-1))==0){
	printf("It is a power of 2\n");
	}
else{
	printf("%d is not a power of 2\n");
}	
return 0;
}
