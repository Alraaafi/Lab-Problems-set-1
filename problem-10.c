#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,sum;
    float avg;

    printf("Enter marks of the five courses: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    sum = m1+m2+m3+m4+m5;
    avg = (float)sum/5;

    printf("Total = %d\n",sum);
    printf("Average = %.f\n",avg);
    //©Alraaafi
}
