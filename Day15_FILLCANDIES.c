#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M);
        
        // Calculate maximum number of candies a single bag can hold
        int capacity_per_bag = K * M;
        
        // Calculate the minimum number of bags needed
        int bags_needed = (N + capacity_per_bag - 1) / capacity_per_bag;
        
        printf("%d\n", bags_needed);
    }
    
    return 0;
}