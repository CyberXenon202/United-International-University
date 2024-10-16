/*WAP that will determine whether an integer 
is palindrome number or not */
#include<stdio.h>
int main(){
int num, temp, r, sum=0;
printf("Enter any number=");
scanf("%d",&num);

temp=num;
while(temp!=0){
	r=temp%10;
	sum=sum*10+r;
	temp=temp/10;
	}
if(sum==num){
	printf("Palindrome");
	}
else{
	printf(" Not Palindrome");
}
return 0;
}
