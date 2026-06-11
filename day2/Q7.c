#include <stdio.h>

int main() {
    int num;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num;
    while (n > 0) {
        product = product * (n % 10);
        n = n / 10;
    }

    printf("Product of digits of %d = %d\n", num, product);
    return 0;
}
