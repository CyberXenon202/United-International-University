//program that will decide whether a year is leap year or not
#include<stdio.h>
int main(){
int year;
printf("Enter the year=");
scanf("%d",&year);

if(year%400==0){
	printf("Leap year\n");
}
else if(year%4==0 && year%100!=0){
	printf("Leap year\n");
}
else{
	printf("Not Leap year\n");
}
return 0;
}
