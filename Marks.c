#include<stdio.h>
int main()
{
    int marks[5] = {80,90,70,60,50};
    for(int i=5; i>=0; i--)
    {
        printf("%d\n", marks[i]);
    }
    return(0);
}