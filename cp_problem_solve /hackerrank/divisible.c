// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges/divisible-4/problem

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n % 3 == 0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
