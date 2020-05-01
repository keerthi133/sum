


#include<stdio.h>
int sumofdigits(int n);
int main()
{
int n,sum;
printf("enter the number\n");
scanf("%d",&n);
    sum=sumofdigits(n);
    printf("sum of digits %d=%d",n, sum);
    return 0;
}
int sumofdigits(int n)
{
    if(n==0)
    return 0;
    return ((n%10)+sumofdigits(n/10));
    }
    
    



