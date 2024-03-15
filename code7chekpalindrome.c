#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindromeInt(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return originalNum == reversedNum;
}

bool isPalindromeString(char *str) {
    int len = strlen(str);
    int i, j;

    // Convert string to lowercase
    for (i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return false;
        }
    }

    return true;
}

int main() {
    char input[100];
    printf("Enter a number or string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove trailing newline if present

    // Check if input is an integer or string
    int num;
    if (sscanf(input, "%d", &num) == 1) {
        if (isPalindromeInt(num)) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }
    } else {
        if (isPalindromeString(input)) {
            printf("%s is a palindrome.\n", input);
        } else {
            printf("%s is not a palindrome.\n", input);
        }
    }

    return 0;
}
