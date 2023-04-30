#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number between 1 to 12 to get the month name: ");
    scanf("%d",&n);

    if(n==1)       printf("January\n");
    else if(n==2)  printf("February\n");
    else if(n==3)  printf("March\n");
    else if(n==4)  printf("April\n");
    else if(n==5)  printf("May\n");
    else if(n==6)  printf("June\n");
    else if(n==7)  printf("Julay\n");
    else if(n==8)  printf("August\n");
    else if(n==9)  printf("September\n");
    else if(n==10) printf("October\n");
    else if(n==11) printf("Nobember\n");
    else if(n==12) printf("December\n");
    else printf("Wrong Input\n");
    //©Alraaafi
}
