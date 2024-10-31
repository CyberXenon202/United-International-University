#include<stdio.h>

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
    fib(n-1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int f = fib(i);
        if (f == 0)
            printf("%d & ", f);
        else if (f % 2 == 0)
            printf("%d $ ", f);
        else if(i==n-1)
            printf("%d", f);
        else
           printf("%d # ", f);
    }


    return 0;
}
