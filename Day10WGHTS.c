#include <stdio.h>

int canMeasure(int W, int X, int Y, int Z) {
    // Check all combinations of weights
    if (W == X || W == Y || W == Z) return 1; // single weights
    if (W == X + Y || W == X + Z || W == Y + Z) return 1; // two weights
    if (W == X + Y + Z) return 1; // all three weights
    return 0; // not possible
}

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z);
        
        // Check if we can measure the exact weight
        if (canMeasure(W, X, Y, Z)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}