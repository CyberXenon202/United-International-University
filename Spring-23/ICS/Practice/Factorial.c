#include<stdio.h>
int main(){
int n,i,fact=1;
printf("Enter the value=");
scanf("%d",&n);

for(i=1; i<=n; i++){
	printf("%d ",i);

	fact=fact*i;
}

printf("=%d",fact);

return 0;
}
