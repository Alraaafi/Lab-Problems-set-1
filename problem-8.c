#include<stdio.h>
int main()
{
    int n1,n2,n3,max;

    printf("Enter the first integer: ");
    scanf("%d",&n1);
    printf("Enter the second integer: ");
    scanf("%d",&n2);
    printf("Enter the third integer: ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3) max = n1;
    else if(n2>n1 && n2>n3) max =n2;
    else max = n3;

    printf("Maximum value of three integers: %d\n",max);
    //©Alraaafi
}
