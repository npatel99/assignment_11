#include<stdio.h>
/*Write a function to calculate LCM of two numbers. (TSRS)*/

int twoNumberLCM(int n1, int n2)
{
    int lcm;
    int max = (n1>n2)?n1:n2;
    while(1)
    {
        if(max%n1==0 && max%n2==0)
        {
            lcm = max;
            break;
        }
        max++;
    }
    return lcm;
}

int main()
{
    int n1, n2;
    printf("Enter two number n1 and n2: ");
    scanf("%d %d", &n1, &n2);
    printf("LCM of n1 = %d and n2 = %d is: %d\n", n1, n2, twoNumberLCM(n1, n2));
    
    return 0;
}
