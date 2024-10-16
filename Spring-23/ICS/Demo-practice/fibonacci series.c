#include<stdio.h>
int main()
{
    int n,c,i,temp;
    int a=0, b=1;
    printf("Enter N: ");
    scanf("%d", &n);

    if(n>0)
    {
        printf("%d ", a);
    }
    for(i=2; i<=n; i++)
    {
        c=a+b;
        printf("%d ", c);
        temp=b;
        b=c;
        a=temp;

    }

    return 0;
}
