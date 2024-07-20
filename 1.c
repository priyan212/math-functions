//Write a program to input two numbers and print the sum, difference, multiplication, division of those numbers using call by value with return.
#include<stdio.h>
int main()
{
    int a,b,sum,dif,mult,divi;
    printf("enter the two numbers:");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("the sum is =%d\n",sum);
    dif=diff(a,b);
    printf("the differnce is =%d\n",dif);
    mult=mul(a,b);
    printf("the result is =%d\n",mult);
    divi=div(a,b);
    printf("the quotient is =%d\n",divi);

}
int add(int x,int y)
{
    return x+y;
}
int diff(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}
