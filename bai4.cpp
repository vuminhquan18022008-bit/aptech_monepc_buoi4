#include <stdio.h>

int main() {
    
    int a, b, c, secondLargestNumber;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Add your code in here:
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        secondLargestNumber = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        secondLargestNumber = b;
    } else {
        secondLargestNumber = c;
    }

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    printf("\n\n%d is the 2nd largest number.\n", secondLargestNumber);
    return 0;
}
