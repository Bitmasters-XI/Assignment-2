#include <stdio.h>
#include <stdlib.h>
int reversedfunction(int num);
int main()
{
    int number,reversed;
    printf("Enter an integer number:");
    scanf("%d" , &number);
    reversed=reversedfunction(number);

}