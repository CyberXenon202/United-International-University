#include<stdio.h>
int main(){
	
int a,b,c;
scanf("%d %d %d",&a,&b,&c);

if(a>b&&a>c){
	printf("%d is maximum number",a);
}
else if(b>a&&b>c){
	printf("%d is maximum number",b);
}
else{
printf("%d is maximum number",c);
}

return 0;
}
