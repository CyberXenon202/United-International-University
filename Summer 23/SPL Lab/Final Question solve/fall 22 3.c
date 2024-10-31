#include<stdio.h>
#include<string.h>

struct info
{
    char id[10];
    char name[30];
    char birthday[11];
    char house;
    int purchase[3];
};

int sub(char a[], char b[])
{
    int flag=0;
    int ln1= strlen(a), ln2=strlen(b);
    for(int i=0; i<ln1; i++)
    {
        if(a[i]==b[0])
        {
            flag=1;
            for(int j=1; j<ln2; j++)
            {
                if(a[i+j]!=b[j])
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            return flag;
        }
    }
    return flag;

}

int main()
{

    int n;

    int a=0,b=0;
    int arr1[n], ind1[n];
    int arr2[n], ind2[n];

    printf("Enter customer number: ");
    scanf("%d", &n);

    struct info s[n];

    for(int i=0; i<n; i++)
    {
        fflush(stdin);
        printf("Enter I'd: ");
        gets(s[i].id);

        printf("Enter name: ");
        gets(s[i].name);

        printf("Enter birthday:(dd/mm/yyyy) ");
        gets(s[i].birthday);

        printf("Enter option: \n");
        printf("1. Gryffindor\n2. Slytherin\n");
        scanf("%d", &s[i].house);

        int sum1=0, sum2=0;
        printf("Enter purchase score: ");

        if(s[i].house==1)
        {
            for(int j=0; j<3; j++)
            {
                scanf("%d", &s[i].purchase[j]);
                sum1+=s[i].purchase[j];
            }
            float avg1= (float)sum1/3;
            arr1[a]= avg1;
            ind1[a]=i;
            a++;
        }
        else
        {
            for(int j=0; j<3; j++)
            {
                scanf("%d", &s[i].purchase[j]);
                sum2+=s[i].purchase[j];
            }
            float avg2= (float)sum2/3;
            arr2[b]= avg2;
            ind2[b]=i;
            b++;
        }
    }
    float max1= arr1[0],  max2=arr2[0];
    int index1=ind1[0],index2=ind2[0];


    for(int i=0; i<a; i++)
    {
        char s1[3]="est";
        int r= sub(s[i].name, s1);
        if(r==1)
        {
            for(int i=1; i<a; i++)
            {
                if(max1<arr1[i])
                {
                    max1=arr1[i];
                    index1=ind1[i];
                }
            }
            printf("%s\n", s[index1].name);
            printf("%s\n", s[index1].birthday);
            printf("%.2f", max1);
        }
        else
            printf("NIL");
    }
    if(s[index2].house==2)
    {
        printf("Gryffindor:");
        char s2[3]="rus";
        int r= sub(s[index2].name, s2);
        if(r==1)
        {

            for(int i=1; i<b; i++)
            {
                if(max2<arr2[i])
                {
                    max2=arr2[i];
                    index2=ind2[i];
                }
            }
            printf("%s\n", s[index2].name);
            printf("%s\n", s[index2].birthday);
            printf("%.2f", max2);
        }
        else
            printf("NIL");
    }
    return 0;
}
