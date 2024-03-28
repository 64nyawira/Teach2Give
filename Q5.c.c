/*Question 5: Reverse Integer
Write a program that takes an integer as input and returns an integer with reversed digit
ordering.*/

#include <stdio.h>

int reverse(int n) {
    int reversed = 0;
    while (n != 0) {
        int value = n % 10;
        reversed = reversed * 10 + value;
        n /= 10;
    }

    return reversed;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int reversednum = reverse(number);
    printf("Reversing gives: %d\n", reversednum);
    return 0;
}
