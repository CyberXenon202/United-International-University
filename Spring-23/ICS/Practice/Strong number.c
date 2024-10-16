#include<stdio.h>
int main(){
int n,fact=1,sum=0,r,temp,i;
printf("Enter any positive number=");
scanf("%d",&n);
temp=n;
while(temp!=0){
	temp=temp%10;
	fact=1;
	for(i=1; i<=r; i++){
		fact=fact*i;
	}
	sum=sum+fact;
	temp=temp/10;}
	if(n==sum){
		printf("Strong number");
	}
	else{
		printf("Not Strong number");
	}
return 0;}
