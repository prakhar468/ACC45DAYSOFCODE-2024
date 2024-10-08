#include <stdio.h>

// Custom absolute value function
int my_abs(int n) {
    return (n < 0) ? -n : n;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y; // Positions of policeman and thief
        scanf("%d %d", &X, &Y);
        
        int distance = my_abs(Y - X); // Distance between them
        
        // Time to catch the thief at relative speed of 1 unit/sec
        printf("%d\n", distance);
    }
    
    return 0;
}