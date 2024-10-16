#include<stdio.h>
int main(){

int a,b,c;
printf("Enter the three value=");
scanf("%d %d %d",&a,&b,&c);

if(0<a<180&&0<b<180&&0<c<180){

printf("yes");
	}
	else if(a+b+c==180){
		printf("yes");
	}

	else{
	printf("No");
	}

return 0;
}
