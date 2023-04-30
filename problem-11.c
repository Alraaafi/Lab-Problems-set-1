#include<stdio.h>
int main()
{
    int Y;

    scanf("%d",&Y);

    if(Y%400==0) printf("%d is a leap year.\n",Y);
    else if(Y%4==0 && Y%100!=0) printf("%d is a leap year.\n",Y);
    else  printf("%d is NOT leap year.\n",Y);
    //©Alraaafi
}
