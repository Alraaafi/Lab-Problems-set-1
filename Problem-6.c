#include<stdio.h>
int main(){
    int x1,x2,y1,y2;
    double dis;

    printf("Enter x1: ");
    scanf("%d",&x1);

    printf("Enter y1: ");
    scanf("%d",&y1);

    printf("Enter x2: ");
    scanf("%d",&x2);

    printf("Enter y2: ");
    scanf("%d",&y2);

    dis =  sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );

    printf("Distance between the said points: %.4lf\n",dis);

    //©Alraaafi
}
