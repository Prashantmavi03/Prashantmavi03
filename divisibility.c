#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0) {
        printf("%d is divisible by 3.\n", num);
    }
    else{
        if (num % 7 == 0) {
        printf("%d is divisible by 7.\n", num);
        }
        else{
            if (num % 5 == 0) {
            printf("%d is divisible by 5.\n", num);
            }
            else{
                if (num % 8 == 0) {
                    printf("%d is divisible by 8.\n", num);
                }
                else {
                    if (num % 6 == 0) {
                        printf("%d is divisible by 6.\n", num);
                    }
                    else {
                        printf("%d is not divisible by 3, 7, 5, 8, or 6.\n", num);
                    }
                }
            }
        }
    }
    return 0;
}