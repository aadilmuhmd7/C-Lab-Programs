#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int sumOfOddElements(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int sumUsingPointer(int *arr, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    return sum;
}

int main() {
    int choice, n;
    int arr[100];

    do {
        printf("\nMenu:\n");
        printf("1. Factorial (Recursion)\n");
        printf("2. Fibonacci (Recursion)\n");
        printf("3. Sum of Odd Elements in Array\n");
        printf("4. Sum of Array using Pointer\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Factorial: %d\n", factorial(n));
                break;

            case 2:
                printf("Enter terms: ");
                scanf("%d", &n);
                printf("Fibonacci series: ");
                printFibonacciSeries(n);
                break;

            case 3:
                printf("Enter array size: ");
                scanf("%d", &n);

                printf("Enter elements: ");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }

                printf("Sum of odd elements: %d\n", sumOfOddElements(arr, n));
                break;

            case 4:
                printf("Enter array size: ");
                scanf("%d", &n);

                printf("Enter elements: ");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }

                printf("Sum using pointer: %d\n", sumUsingPointer(arr, n));
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