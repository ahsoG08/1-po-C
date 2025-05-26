#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    int has_zero = (a == 0) | (b == 0) | (c == 0);

    int negative_count = (a < 0) + (b < 0) + (c < 0);

    int sign = !has_zero * (1 - 2 * (negative_count % 2));

    printf("%d\n", sign);
    return 0;
}
