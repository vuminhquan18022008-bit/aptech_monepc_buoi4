#include <stdio.h>

int main() {
    // Add your code in here:
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
    if (n % 2 == 0) {
        printf("%d is an even number.", n);
    } else {
        printf("%d is an odd number.", n);
    }
	
    return 0;
}
