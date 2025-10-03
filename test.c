// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);
//     printf("a = %d", a);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i = 1 ; i <= n ; i=i+1 )
//     {
//         printf("%d\n", i);
//     }
// }

// #include <stdio.h>

// int main() {
//     char a[500];
//     scanf("%s", &a);   
//     printf("%s\n", a);       
//     return 0; // Exit
// }



// #include<stdio.h>
// int main(){
//     int n, even=0, odd=0, positive=0, negative=0;
//     scanf("%d", &n);
//     for(int i=1; i <= n; i++)
//     {
//         int input;
//         scanf("%d", &input);
//         if(input % 2 == 0){
//             even++;
//         }
//         else{
//             odd++;
//         }
        
//         if(input > 0){
//             positive++;
//         }
//         else if(input < 0){
//             negative++;
//         }
        
//     }
//     printf("Even: %d\n", even);
//     printf("Odd: %d\n", odd);
//     printf("Positive: %d\n", positive);
//     printf("Negative: %d\n", negative);
// }



// // H. One Prime
// #include<stdio.h>
// int main(){
//     int x, prime=1;
//     scanf("%d", &x);
//     for(int i=2; i <= x-1; i++)
//     {   
//         if(x % i == 0){
//             prime = 0;
//             break;
//         }
        
//     }
//     if(prime == 1){
//         printf("YES\n");
//     }
//     else{
//         printf("NO\n");
//     }
//     return 0;
// }

