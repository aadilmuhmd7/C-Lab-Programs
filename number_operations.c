#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void printFibonacci(int n) {
    int a = 0, b = 1;

    printf("Fibonacci series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}

int isPalindrome(int n) {
    int original = n, reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return original == reversed;
}

int isArmstrong(int n) {
    int original = n, sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return original == sum;
}

int main() {
    int choice, n;

    do {
        printf("\nMenu:\n");
        printf("1. Prime Check\n");
        printf("2. Fibonacci Series\n");
        printf("3. Palindrome Check\n");
        printf("4. Armstrong Check\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &n);
                printf(isPrime(n) ? "Prime number\n" : "Not a prime number\n");
                break;

            case 2:
                printf("Enter terms: ");
                scanf("%d", &n);
                printFibonacci(n);
                break;

            case 3:
                printf("Enter number: ");
                scanf("%d", &n);
                printf(isPalindrome(n) ? "Palindrome number\n" : "Not a palindrome\n");
                break;

            case 4:
                printf("Enter number: ");
                scanf("%d", &n);
                printf(isArmstrong(n) ? "Armstrong number\n" : "Not an Armstrong number\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}