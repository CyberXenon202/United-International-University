/* write a program (WAP) that will print
following series upto N'th terms. */

#include<stdio.h>
int main(){
int n,i,r;

printf("Enter N terms=");
scanf("%d",&n);

for(i=1; i<=n; i++){
	r=(i%2!=0);
	printf("%d,",r);

}
return 0;
}
