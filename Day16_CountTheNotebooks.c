#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int N; // Weight of the pulp in kg
        scanf("%d", &N); // Read the weight of pulp

        // Calculate the number of notebooks
        int pages = N * 1000; // Total pages that can be made
        int notebooks = pages / 100; // Each notebook consists of 100 pages

        // Output the number of notebooks
        printf("%d\n", notebooks);
    }

    return 0;
}