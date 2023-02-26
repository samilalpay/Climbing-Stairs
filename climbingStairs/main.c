#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n);
int main() {
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("%d",climbStairs(number));



    return 0;
}
int climbStairs(int n)
{

    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else
    {
        return climbStairs(n-2) + climbStairs(n-1);
    }


}
