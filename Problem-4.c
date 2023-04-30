#include<stdio.h>
int main(){
    int N,temp,year,day,week;
    scanf("%d",&N);
    year = N/365 ;
    printf("Years: %d\n",year);
    temp = N % 365 ;
    week = temp/7 ;
    printf("Weeks: %d\n",week);
    temp = temp % 7;
    day = temp ;
    printf("Days: %d\n",day);
    //©Alraaafi

}
