#include <stdio.h>

int main() {
    int T, N, K, A[100];  // T: test cases, N: people, K: money in ATM, A: withdrawal amounts
    scanf("%d", &T);  // Read number of test cases
    while (T--) {
        scanf("%d %d", &N, &K);  // Read N and K
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);  // Read withdrawal amounts
        }
        
        for (int i = 0; i < N; i++) {
            if (A[i] <= K) {  // Check if withdrawal is possible
                printf("1");  // Success
                K -= A[i];  // Deduct from ATM
            } else {
                printf("0");  // Failure
            }
        }
        printf("\n");  // New line for next test case
    }
    return 0;
}