#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int remainder = num % 5;
    switch (remainder) {
        case 0:
            printf("%d is divisible by 5.\n", num);
            break;
        case 1:
            printf("%d leaves a remainder of 1 when divided by 5.\n", num);
            break;
        case 2:
            printf("%d leaves a remainder of 2 when divided by 5.\n", num);
            break;
        case 3:
            printf("%d leaves a remainder of 3 when divided by 5.\n", num);
            break;
        case 4:
            printf("%d leaves a remainder of 4 when divided by 5.\n", num);
            break;
        default:
            printf("Invalid case.\n");
    }

    return 0;
}