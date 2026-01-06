#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    printf("%d",c);
}