#include<stdio.h>
int main()
{
    int i,n1,n2,n3,n4,sum=0;

    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    printf("Enter the third number: ");
    scanf("%d",&n3);
    printf("Enter the fourth number: ");
    scanf("%d",&n4);

    if(n1%2==0) sum = sum+n1;
    if(n2%2==0) sum = sum+n2;
    if(n3%2==0) sum = sum+n3;
    if(n4%2==0) sum = sum+n4;

    printf("Sum of all even values: %d\n",sum);
    //©Alraaafi
}
