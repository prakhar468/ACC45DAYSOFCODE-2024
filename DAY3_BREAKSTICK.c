#include <stdio.h>

int main() {
    int T; //Number of Test Cases
    scanf("%d", &T);

    while (T--) {
        long N;
        scanf("%lld", &N);
        long X;
        scanf("%lld",&X);

/*
    if N is even then it will work for all X 
    if N is odd then it will only work Odd X 
*/


        if (X % 2 == 1 || N % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}