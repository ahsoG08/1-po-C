#include <stdio.h>

int main() {
    int num;
    const char* results[2] = {"четным", "нечетным"};
    
    printf("Введите целое число: ");
    scanf("%d", &num);
    
    printf("Число %d является %s\n", num, results[num % 2]);
    
    return 0;
}
