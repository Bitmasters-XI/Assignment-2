#include <stdio.h>

int reverseNumber(int number) {
    int reversed = 0;
    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return reversed;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int reversed = reverseNumber(number);
    printf("The reversed number is: %d\n", reversed);

    return 0;
}