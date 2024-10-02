#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while(T--) {
        int B1, B2, B3;
        scanf("%d %d %d", &B1, &B2, &B3);

        // Counting number of empty bottles
        int empty_count = (B1 == 0) + (B2 == 0) + (B3 == 0);

        if (empty_count >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }

    return 0;
}