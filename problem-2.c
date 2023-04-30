#include<stdio.h>
int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("%d + %c\n",a,c);
    printf("%f + %c\n",x,c);
    printf("%lf + %f\n",dx,x);
    printf("%d + %ld\n",((int) dx),ax);
    printf("%d + %f\n",a,x);
    printf("%d + %d\n",s,b);
    printf("%ld + %d\n",ax,b);
    printf("%d + %c\n",s,c);
    printf("%ld + %c\n",ax,c);
    printf("%ld + %ul\n",ax,ux);
    //©Alraaafi

}
