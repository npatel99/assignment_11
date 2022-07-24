#include<stdio.h>
/*Write a function to calculate HCF of two numbers. (TSRS)
HCF(12,4) :: 12 = 2x2x3 4 = 2x2*/

int twoNumberHCF(int n1, int n2)
{
    while(n1!=n2)
    {
        if(n1>n2)
            n1 = n1-n2;
        else
            n2 = n2-n1;
    }
    return n1;
}

int main()
{
    int n1, n2;
    printf("Enter two number n1 and n2: ");
    scanf("%d %d", &n1, &n2);
    printf("HCF of n1 = %d and n2 = %d is: %d\n", n1, n2, twoNumberHCF(n1, n2));
    
    return 0;
}
