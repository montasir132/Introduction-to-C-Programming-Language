// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include<stdio.h>
int main() {
    int n, even=0, odd=0, positive=0, negative=0;
    int i, input;

    scanf("%d", &n);
    for(i=1; i <= n; i++) {
        scanf("%d", &input);

        if(input % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        if(input > 0) {
            positive++;
        } else if(input < 0) {
            negative++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}

