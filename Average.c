//Calculate The Average Of Number
#include<stdio.h>
int main()
{
    int a,b,c,total,average;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Third Number: ");
    scanf("%d",&c);
    total=a+b+c;
    printf("Sum: %d\n",total);
    average=total/3;
    printf("Average: %d\n",average);
    return 0;

}
    
