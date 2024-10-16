//grade sheet making programme
#include<stdio.h>
int main(){
	int marks,A,HW,CT,MT,TF;
printf("Attendance (A)=5%\n");
printf("Assignment (HW)=10%\n");
printf("Class Test (CT)=15%\n");
printf("Midterm    (MT)=30%\n");
printf("Final      (TF)=40%\n");

printf("Enter the value=");
scanf("%d %d %d %d %d",&A,&HW,&CT,&MT,&TF);
marks=A+HW+CT+MT*0.6+TF*0.40;


if(marks>100 || marks<0){
	printf("Not a valid number\n");
}
else if(90<=marks){
	printf("The letter Grade is A\n");
}
else if(86<=marks){
	printf("The letter Grade is A-\n");
}
else if(82<=marks){
	printf("The letter Grade is B+\n");
}
else if(78<=marks){
	printf("The letter Grade is B\n");
}
else if(74<=marks){
	printf("The letter Grade is B-\n");
}
else if(70<=marks){
	printf("The letter Grade is C+\n");
}
else if(66<=marks){
	printf("The letter Grade is C\n");
}
else if(62<=marks){
	printf("The letter Grade is C-\n");
}
else if(58<=marks){
	printf("The letter Grade is D+\n");
}
else if(55<=marks){
	printf("The letter Grade is D\n");
}

else if(marks<=54){
	printf("The letter Grade is F\n");
}

return 0;
}


