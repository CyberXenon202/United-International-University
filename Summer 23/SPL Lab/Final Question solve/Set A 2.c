#include<stdio.h>
#include<string.h>

struct program
{
    char name[60];
    int total_memory;
    int used_memory;
};
int all_caps(char *input);

int main()
{
    int N;
    printf("Enter How many program is running: ");
    scanf("%d", &N);
    struct program s[N];
    for(int i=0; i<N; i++)
    {
        fflush(stdin);
        printf("Enter Program name: ");
        gets(s[i].name);

        printf("Enter Total Memory: ");
        scanf("%d", &s[i].total_memory);

        printf("Enter Used Memory: ");
        scanf("%d", &s[i].used_memory);
    }

    int count=0, array[N];

    for(int i=0; i<N; i++)
    {
        int result= all_caps(s[i].name);
        if(result==1)
        {
            if(s[i].total_memory<=s[i].used_memory)
            {
                array[count]=i;
                count++;
            }

        }
    }

    printf("%d\n", count);
    for(int i=0; i<count; i++)
    {
        printf("%s\n", s[array[i]].name);
    }

    return 0;
}

int all_caps(char *input)
{
    int flag=0;
    int ln=strlen(input);
    for(int i=0; i<ln; i++)
    {
        if(*(input+i)<='Z' && *(input+i)>='A')
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    return flag;
}

