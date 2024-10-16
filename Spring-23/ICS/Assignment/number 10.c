/* write a program (WAP) that will print 
Fibonacci series upto n'th terms*/
#include<stdio.h>
int main(){
int first=0 ,second=1, count=1, fibo,n;
printf("Enter any number=");
scanf("%d",&n);

while(count<=n){
	if(count<=1){ 
fibo=count;
	}
	else{
		fibo=first+second;
		first=second;
		second=fibo;
	}
	printf("%d ",fibo);
	count++;
}

return 0;
}
