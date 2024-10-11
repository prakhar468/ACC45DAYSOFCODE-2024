#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
        // Reading the tastiness of the ingredients
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        // Calculating the maximum possible tastiness
        int option1 = a + c; // Choosing A and C
        int option2 = a + d; // Choosing A and D
        int option3 = b + c; // Choosing B and C
        int option4 = b + d; // Choosing B and D
        
        // Find the maximum of the four options
        int maxTastiness = option1;
        if (option2 > maxTastiness) maxTastiness = option2;
        if (option3 > maxTastiness) maxTastiness = option3;
        if (option4 > maxTastiness) maxTastiness = option4;
        
        // Output the result
        printf("%d\n", maxTastiness);
    }
    
    return 0;
}