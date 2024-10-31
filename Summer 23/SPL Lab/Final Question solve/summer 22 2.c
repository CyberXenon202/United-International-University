#include<stdio.h>
int convBase(int num);
int primeChecker(int *a,int *b);
void digit_find(int *x, int *y,int num); // this will return the sum of first and last digit
int check1(int x);
int check2(int x);
int prime(int x);

int main()
{

    int n;

    printf("Enter a number:");
    scanf("%d",&n);

    if( check1(n)|| check2(n))
        printf("YES");
    else
        printf("NO");

    return 0;
}
int convBase(int num)
{
    if(num<=0) return 0;
    return 10* convBase(num/6) + num%6;
}
int check1(int x)
{
    int base = convBase(x); // converting the digit

    int r,n,s ;
    int sum = 0 ;
    int hold = base; // so that original base stays unchanged
    while(hold != 0) // counts the sum of the digit
    {
        r= hold % 10 ;
        n= hold / 10 ;
        sum += r;
        hold = n;
    }

    if(sum % 5 == 0)
        return 1;
    else
        return 0;
}

int check2(int x)
{
    int dig1,dig2;
    digit_find(&dig1,&dig2,x); // getting first and last digit

    int count = primeChecker(&dig1,&dig2);

    if(count> 4)
        return 1;
    else
        return 0;

}
void digit_find(int *x, int *y,int num)
{
    int r,s,n,p;
    int hold = num;
    int dig1,dig2;
    while(hold!=0)
    {
        r = hold % 10 ;
        if(hold == p )
            dig2 = r ;
        n = hold / 10 ;
        hold = n;
        if(hold<=0)
            dig1 = r;
    }
    *x = dig1;
    *y = dig2;
}

int primeChecker(int *dig1,int *dig2 )
{
    int sum = *dig1 + *dig2 ;
    int count = 0 ;
    for(int i = 2; i< sum ; i++)
    {
        if(prime(i)==1)
            count++ ;
    }
    return count;
}
int prime(int x)
{
    if (x==0 || x ==1)return 0;
    for(int i = 2 ; i<x ;i++)
    {
        if(x%i == 0)
            return 0;
    }
    return 1;
}


