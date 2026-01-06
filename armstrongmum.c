#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int c=0,sum=0;
    while(temp>0){
        c++;
        temp/=10;
    }
    temp=n;
    while(temp>0){
        int r=temp%10;
        sum += (int)pow(r, c); 
        temp/=10;
    }
     if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
    
}