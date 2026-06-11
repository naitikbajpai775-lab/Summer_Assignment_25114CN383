#include <stdio.h>

int main() {
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    printf("Reverse of %d = %d\n", num, rev);

    return 0;
}
