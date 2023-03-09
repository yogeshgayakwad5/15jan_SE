#include<stdio.h>
int main()
{
    int n, sum=0, FirstDigit, LastDigit;

    printf("\nEnter the number to find sum of First and Last Digit = ");
    scanf("%d", &n);
    LastDigit = n % 10;
    
    while(n >= 10)
    {
        n = n / 10;
    }
    FirstDigit = n;
    sum = FirstDigit + LastDigit;
    printf("\nSum of First and Last Digit = %d", sum);
    return 0;
}
