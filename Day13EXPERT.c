#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int X, Y; // X = number of problems submitted, Y = number of problems approved
        scanf("%d %d", &X, &Y);
        
        // Calculate the percentage of approved problems
        if (Y * 100 >= 50 * X) {
            printf("YES\n"); // At least 50% approved
        } else {
            printf("NO\n");  // Less than 50% approved
        }
    }
    
    return 0;
}