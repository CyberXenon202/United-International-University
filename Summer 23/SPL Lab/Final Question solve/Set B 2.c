#include<stdio.h>
#include<string.h>

struct card
{
    char name[60];
    int stage;
    int HP;
};

int main()
{
    int N;
    printf("Enter How many: ");
    scanf("%d", &N);
    struct card s[N];

    for(int i=0; i<N; i++)
    {
        fflush(stdin);
        printf("Enter Program name: ");
        gets(s[i].name);

        printf("Enter Total Memory: ");
        scanf("%d", &s[i].stage);

        printf("Enter Used Memory: ");
        scanf("%d", &s[i].HP);
    }

    int sum=0;
    for(int i=0; i<N; i++)
    {
        sum+=50;   //base prise

        int ln=strlen(s[i].name);
        sum+=s[i].HP;
        if(s[i].name[ln-1]=='X')
            sum+=200;
        if(s[i].stage==1)
            sum+=30;
        else if(s[i].stage==2)
            sum+=70;
    }

    printf("Total Price: %d", sum);

}
