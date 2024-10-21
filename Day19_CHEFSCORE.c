#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        // Maximum possible score is N * X
        // We need to check if Y is achievable
        if (Y % X <= N && Y <= N * X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}