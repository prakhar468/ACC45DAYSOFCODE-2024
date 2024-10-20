#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Input number of test cases
    
    while(T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);  // Input N, A, and B for each test case
        
        int rounds = 0;
        // Calculate the number of rounds (log2(N))
        while (N > 1) {
            N /= 2;
            rounds++;
        }
        
        // Total time = A (for each round) + B (for each break, except after the last round)
        int total_time = rounds * A + (rounds - 1) * B;
        
        printf("%d\n", total_time);  // Output the result
    }
    
    return 0;
}