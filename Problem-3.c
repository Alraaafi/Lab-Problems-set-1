#include<stdio.h>
int main(){
    double area,peri,radious,pi=3.1416;
    scanf("%lf",&radious);
    area = pi*radious*radious;
    peri = 2 * pi * radious ;
    printf("perimeter of the Circle = %lf inches\n",peri);
    printf("Area of the Circle = %lf Square inches\n",area);
    getchar();
    return 0;
    //©Alraaafi
}
