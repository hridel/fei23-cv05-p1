#include <stdio.h>

int sum_of_numbers(int endOfSequence);

int main() {
    int n;

    printf("Zadejte hodnotu N: ");
    scanf("%d", &n);

    int result = sum_of_numbers(n);

    printf("Soucet cisel od 1 do %d je %d", n, result);
    return 0;
}

int sum_of_numbers(int endOfSequence) {
    int sum = 0;
    for (int i = 1; i <= endOfSequence; i++) {
        sum += i;
    }
    return sum;
}
