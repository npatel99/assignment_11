#include<stdio.h>
/*Write a function to check whether a given number is Prime or not. (TSRS)*/

int checkPrimeNumber(int n)
{
    int i, isPrime = 1;
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("given number is prime:: Yes:1 No:0 ---> %d", checkPrimeNumber(n));
    
    return 0;
}
