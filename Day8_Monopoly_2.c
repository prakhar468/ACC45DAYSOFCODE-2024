#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int P, Q, R, S;
        scanf("%d %d %d %d", &P, &Q, &R, &S);
        
        // Check if any one company's profit is strictly greater than the sum of the others
        if (P > (Q + R + S) || Q > (P + R + S) || R > (P + Q + S) || S > (P + Q + R)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}