#include <stdio.h>

int main() {
	// your code goes here
	int A; 
	scanf("%d", &A);
	int B; 
	scanf("%d", &B);
    int C; 
	scanf("%d", &C);
    int X; 
	scanf("%d", &X);
	
	if (X == A || X == B || X == C) {
	    printf("Yes\n");
	} else {
	    printf("No\n");
	}
	
	return 0;
}