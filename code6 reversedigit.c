#include <stdio.h>

int reverseDigits(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10; // Append the last digit to reversedNum
        num /= 10; // Remove the last digit from num
    }
    return reversedNum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversedNum = reverseDigits(num);
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
