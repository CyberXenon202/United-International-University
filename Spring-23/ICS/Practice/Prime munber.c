#include<stdio.h>
int main(){
int n, count=0,i;
printf("Enter any positive number=");
scanf("%d",&n);

for(i=2; i<=n/2; i++){
	if(n%i==0){
    count++;
    break;
	}
}
if(count==0){
	printf("Prime number\n");
}
else{
	printf("Not prime number\n");
}


return 0;
}
