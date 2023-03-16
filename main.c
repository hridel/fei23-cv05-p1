#include <stdio.h>

int sumOfNumbers(int endOfSequence);

int sumOfNumbers2(int endOfSequence);

int main() {
    int n;

    printf("Zadejte hodnotu N: ");
    scanf("%d", &n);

    int result = sumOfNumbers(n);
    int result2 = sumOfNumbers2(n);

    printf("\nSoucet cisel od 1 do %d je %d", n, result);
    printf("\nSoucet cisel od 1 do %d je %d", n, result2);
    return 0;
}


int sumOfNumbers(int endOfSequence) {
    int sum = 0;
    for (int i = 1; i <= endOfSequence; i++) {
        sum += i;
    }
    return sum;
}

int sumOfNumbers2(int endOfSequence) {
    return endOfSequence * (1 + endOfSequence) / 2;
}
