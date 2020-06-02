#include<stdio.h>

int addtwonums(int num1,int num2)
{
    return num1+num2;
}

int main()
{
    int num1,num2;
    printf("enter two space saparated numbers\n");
    scanf("%d %d",&num1,&num2);
    printf("the sum is %d",addtwonums(num1,num2));
}