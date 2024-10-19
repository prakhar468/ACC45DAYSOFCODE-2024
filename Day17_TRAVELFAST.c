#include <stdio.h>

int main() {
    int T, X, Y;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    // Loop through each test case
    for (int i = 0; i < T; i++) {
        // Read the time taken by bike and car
        scanf("%d %d", &X, &Y);
        
        // Compare and print the appropriate result
        if (X < Y) {
            printf("BIKE\n");
        } else if (X > Y) {
            printf("CAR\n");
        } else {
            printf("SAME\n");
        }
    }
    
    return 0;
}