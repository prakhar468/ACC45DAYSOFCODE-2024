#include <stdio.h>

int main() {
    int T; // Number of test case
    scanf("%d", & T);

    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", & X, & Y);

        // Calculating total working hours: 
        //4 days of X hours + 1 day of Y hours
        int total_hours = (4 * X) + Y;

        // Displaying result for current test case
        printf("The total number of working hours in a week are:%d\n", total_hours);
    }

    return 0;
}