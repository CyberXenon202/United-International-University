#include<stdio.h>
int main(){
int n,count=0,r,temp;
printf("Enter any positive number=");
scanf("%d",&n);
temp=n;
while(temp!=0){
	temp=temp/10;
	count++;
}
printf("Total number of digit=%d\n",count);

return 0;
}
