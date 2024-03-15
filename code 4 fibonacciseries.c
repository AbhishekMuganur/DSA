#include <stdio.h>

void fibonacci(int limit) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", limit);
    printf("%d, %d, ", first, second);

    for (int i = 2; i < limit; i++) {
        next = first + second;
        printf("%d", next);
        if (i < limit - 1)
            printf(", ");
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int limit;
    printf("Enter the limit for the Fibonacci series: ");
    scanf("%d", &limit);

    fibonacci(limit);

    return 0;
}
