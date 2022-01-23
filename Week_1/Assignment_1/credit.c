#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    int copy;
    int digits = 0;

    printf("Enter credit card number\n");
    scanf("%d",&num);
    copy = num;

    while(copy!=0)
    {
        copy = copy/10;
        digits++;
    }
    /*printf("%d\t",digits);*/
    copy = num;
    long int sum = 0;
    for(int i=1; i<=digits; i++)
    {
        sum += copy % 10;
        copy = copy/10;
    }
    //printf("%ld\n", sum);
    copy = num;
    int sum1 = 0;
    int sum2 = 0;
    int sum3;
    int x = 0;
    int y = 0;
    int a ;
    int b;
    while(copy>0)
    {
        x= copy % 100;
        sum1 = sum1 + (x%10);
        y = (x/10)*2;
        if(y>9)
        {
            a = y/10;
            b = y%10;
            sum2 = sum2 + (a+b);
        }
        else if(y<9)
        {
            sum2 = sum2 + y;
        }
        copy = copy/100;
    }
        //printf("%d\n",sum1);
        //printf("%d\n",sum2);
    sum3 = sum1 + sum2;
    if(sum3%10==0)
        printf("The card is valid!\n");
    else
        printf("The card is invalid\n");
}
