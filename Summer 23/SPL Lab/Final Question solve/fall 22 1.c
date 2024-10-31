#include<stdio.h>
#include<stdio.h>

void SuperPrime( int, int);
int  IsPrime (int);
int digit_sum(int n);
int main()
{
    int a,b;
    printf("Enter range: ");
    scanf("%d%d", &a, &b);

   SuperPrime(a,b);
    return 0;
}

void SuperPrime( int a, int b)
{
    for(int i=a; i<=b; i++)
    {
        int r=IsPrime(i);         // check number prime or not
        if(r==1)
        {
            int p=digit_sum(i);  // for sum call
            if(p==1)
            printf("%d\n", i);
        }
    }
}


int  IsPrime ( int  n)     // prime check
{
    int flag=1;
    for(int j=2; j<n; j++)
    {
        if(n%j==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int digit_sum(int n)        // sum of digit
{
    int oddsum=0, evensum=0, re;
    while(n!=0)
    {
        re=n%10;
        if(re%2==0)
            evensum+=re;
            else
            oddsum+=re;
        n/=10;
    }
    if(evensum>oddsum)
        return 1;
    else
        return -1;
}

