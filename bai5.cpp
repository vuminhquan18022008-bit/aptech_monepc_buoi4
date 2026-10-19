#include <stdio.h>
#include <math.h>

int main() {
    // Add your code in here:
    double a, b, c;
    printf("Enter a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("The equation has no solution.");
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("x1 = x2 = %.2f", x);
    } else {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        printf("x1 = %.2f, x2 = %.2f", x1, x2);
    }
    
    return 0;
}
