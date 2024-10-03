#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        // Points for solving A -> B order
        int scoreA = (500 - X * 2) + (1000 - (X + Y) * 4);
        
        // Points for solving B -> A order
        int scoreB = (1000 - Y * 4) + (500 - (X + Y) * 2);
        
        // Output the maximum score
        printf("%d\n", max(scoreA, scoreB));
    }
    
    return 0;
}