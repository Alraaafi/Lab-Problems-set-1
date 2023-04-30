#include<stdio.h>
int main()
{
    int Phy,chem,maths,totalMark;

    printf("Input the marks obtained in Physics: ");
    scanf("%d",&Phy);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d",&chem);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d",&maths);

    totalMark = Phy+chem+maths ;

    if(Phy >=55 && chem>=50 && maths >=65 && totalMark >=180)
        printf("The candidate is eligible for admission.\n");
    else
        printf("The candidate is NOT eligible for admission.\n");
        //©Alraaafi
}
