#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

int main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = reverseNumber(num);

    printf("The reverse of %d is: %d\n", num, reversed);

    return 0;
}
