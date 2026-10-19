#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Add your code in here:
    int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    printf("%d %d %d", a, b, c);
    return 0;
}
