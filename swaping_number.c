#include <stdio.h>


void swapWithVariable(int *a, int *b) {
    int z;
    z = *a;
    *a = *b;
    *b = z;
}

void swapWithoutVariable(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    swapWithVariable(&n1, &n2);
    printf("After swapping with variable: n1 = %d, n2 = %d\n", n1, n2);

    swapWithoutVariable(&n1, &n2);
    printf("After swapping without variable: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}
