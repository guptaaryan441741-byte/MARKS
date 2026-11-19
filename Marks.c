#include<stdio.h>
int main()
{
    int i,sum=0;
    int marks[7]={50.60,70,80,90 45};
    for(int i=0; i<=6;i++)
    {
        printf("%d\n",marks[i]);

    }
    for(i=0;i<=6;i++)
    {
        sum=sum+marks[i];

    }
    printf("%d=sum of all element",sum);

}
return(0);
