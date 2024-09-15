#include <stdio.h>
#include <math.h>

void print_menu();

int main() {
    int choice;
    double first, second, result;
    
    while(1) {
        print_menu();
        scanf("%d", &choice);
        
        if (choice == 7) {
            break;
        }

        if (choice < 1 || choice > 7) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        printf("\nPlease enter your first number: ");
        scanf("%lf", &first);
        printf("Please enter your second number: ");
        scanf("%lf", &second);

        switch(choice) {
            case 1: // Add
                result = first + second;
                break;
            case 2: // Subtract
                result = first - second;
                break;
            case 3: // Multiply
                result = first * second;
                break;
            case 4: // Divide
                if (second == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    continue;
                }
                result = first / second;
                break;
            case 5: // Modulus
                if ((int)second == 0) {
                    printf("Error: Modulus by zero is not allowed.\n");
                    continue;
                }
                result = (int)first % (int)second;
                break;
            // case 6: // Power
            //     result = pow(first, second);
                break;
            default:
                printf("Invalid choice.\n");
                continue;
        }

        printf("\nResult of operation is: %.2f\n", result);
    }

    return 0;
}

void print_menu() {
    printf("\nWelcome to Simple Calculator\n");
    printf("\nChoose one of the following options: ");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    // printf("\n6. Power");
    printf("\n6. Exit");
    printf("\nNow enter your choice: ");
}
