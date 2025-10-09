// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges/divisible-2-1-1/problem

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}
