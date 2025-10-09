//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=12; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}


// #include <stdio.h>
// int main() {
//     int n = 25;  // এখানে n এর মান 200 ধরা হয়েছে
//     int i;
//     for(i = 1; i <= n; i++) {   // কারণ 8 * 25 = 200
//         printf("8 x %d = %d\n", i, 8 * i);
//     }
//     return 0;
// }
