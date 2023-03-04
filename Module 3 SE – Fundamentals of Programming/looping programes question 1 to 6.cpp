#include <stdio.h>

int main() {
    int n, even_count = 0, odd_count = 0, even_sum = 0, odd_sum = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            even_count++;
            even_sum += n;
        } else {
            odd_count++;
            odd_sum += n;
        }
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);


   int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Table of %d:\n", a);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", a, i, a*i);
    } 
    return 0;
}