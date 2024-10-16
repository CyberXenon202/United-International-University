#include<stdio.h>
int main(){
int n,sum=0,r,temp;
printf("Enter any positive number=");
scanf("%d",&n);
temp=n;
while(temp!=0){
	r=temp%10;
	sum=sum*10+r;
	temp=temp/10;
}
if(n==sum){
	printf("Palindrome");
}
else{
	printf(" Not Palindrome");
}
return 0;
}
