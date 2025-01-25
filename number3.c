#include <stdio.h>


double compute_ex(double x, int terms) {
    double result = 1.0; 
    double factorial = 1.0; // Variable having factorial value

    for (int n = 1; n < terms; n++) {
        factorial *= n; // n!
        result += (x * x) / factorial; // Add the term to the result
    }

    return result;
}

int main() {
    double x;
    int terms;

    // Get input from the user
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms to calculate (e.g., 10): ");
    scanf("%d", &terms);

    // Compute and display the result
    double approximation = compute_ex(x, terms);
    printf("The computed value of e^%.2lf using %d terms is: %.10lf\n", x, terms, approximation);

    return 0;
}

