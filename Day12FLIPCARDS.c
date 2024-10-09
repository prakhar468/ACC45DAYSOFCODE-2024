#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X); // N = total cards, X = cards that are face-up
        
        int face_down = N - X; // Cards that are face-down
        
        // Minimum flips required to make all cards face the same direction
        int min_flips = (X < face_down) ? X : face_down;
        
        printf("%d\n", min_flips);
    }

    return 0;
}