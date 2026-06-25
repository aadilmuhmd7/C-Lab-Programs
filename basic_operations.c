#include <stdio.h>

int main() {
    int option;

    printf("Menu:\n");
    printf("1. Sum & Average\n");
    printf("2. Circle Calculations\n");
    printf("3. Find Largest of Three Numbers\n");
    printf("4. Fare Calculation\n");
    printf("5. Simple Calculator\n");

    printf("Enter choice: ");
    scanf("%d", &option);

    switch (option) {

        case 1: {
            int a, b, c, sum;
            float avg;

            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);

            sum = a + b + c;
            avg = sum / 3.0;

            printf("Sum: %d\n", sum);
            printf("Average: %.2f\n", avg);
            break;
        }

        case 2: {
            float r;
            const float pi = 3.14;
            float area, perimeter;

            printf("Enter radius: ");
            scanf("%f", &r);

            area = pi * r * r;
            perimeter = 2 * pi * r;

            printf("Area: %.2f\n", area);
            printf("Perimeter: %.2f\n", perimeter);
            break;
        }

        case 3: {
            int a, b, c, largest;

            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);

            largest = a;
            if (b > largest) largest = b;
            if (c > largest) largest = c;

            printf("Largest: %d\n", largest);
            break;
        }

        case 4: {
            int age, fare;

            printf("Enter age: ");
            scanf("%d", &age);

            if (age < 12)
                fare = 50;
            else if (age <= 60)
                fare = 100;
            else
                fare = 75;

            printf("Fare: %d\n", fare);
            break;
        }

        case 5: {
            int n1, n2;
            char op;

            printf("Enter two numbers: ");
            scanf("%d %d", &n1, &n2);

            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &op);

            switch (op) {
                case '+':
                    printf("%d\n", n1 + n2);
                    break;

                case '-':
                    printf("%d\n", n1 - n2);
                    break;

                case '*':
                    printf("%d\n", n1 * n2);
                    break;

                case '/':
                    if (n2 != 0)
                        printf("%.2f\n", (float)n1 / n2);
                    else
                        printf("Error: Division by zero\n");
                    break;

                default:
                    printf("Invalid operator\n");
            }
            break;
        }

        default:
            printf("Invalid option\n");
    }

    return 0;
}