#include <stdio.h>
#include <math.h>

int is_prime(int x);
int power_of_2(int x);
int is_mersenne(int x);

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int r=is_mersenne(num);
    if (r==1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

int is_mersenne(int x)      //final check
{
    int r=is_prime(x);
    int q=power_of_2(x + 1);
    if (r==1 && q==1)
        return 1;
    else
        return 0;
}

int  is_prime ( int  n)     // prime check
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

int power_of_2(int n)   // power of 2 check
{
    if((n&(n-1))==0)
        return 1;
    else
        return 0;
}

