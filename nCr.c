#include <stdio.h>

 void factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

  void nCr(int n, int r) {
    if (n < r || n < 0 || r < 0) {
        return 0; 
    }

    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

      int result = nCr(n, r);

    printf("%dC%d (Combinations): %lld\n", n, r, result);

    return 0;
}
