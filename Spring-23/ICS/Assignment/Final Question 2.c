#include<stdio.h>
int main(){
int x,y,i;
printf("Enter the value of x=");
scanf("%d",&x);
printf("Enter the value of y=");
scanf("%d",&y);



for(i=x; i>y; i--){

	printf("%d ",i*i);
}
for(i=x; i>=y; i--){
		if(i==y){
		printf("Reached!\n");		
}
}
	for(i=y; i>x; i--){

	printf("%d ",i*i);
	}
		for(i=y; i>=x; i--){
		if(i==y){
		printf("Reached!\n");		
}
}
	
return 0;
}
