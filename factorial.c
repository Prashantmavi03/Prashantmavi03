#include <stdio.h>

int main() {
   
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
   
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d is: %d\n", n, fact);

    return 0;
}
