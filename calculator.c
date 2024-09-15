#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int, int);
void print_menu();

int main() {
    int choice;
    double first, second, result;
    while(1) {
        print_menu();
        scanf("%d",&choice);
        if(choice == 7) {
            break;
        }
        if (choice < 1 || choice > 7) {
            fprintf(stderr, "Invalid menu choice");
            continue;
        }

        printf("\nPlease enter your first number: ");
        scanf("%lf", &first);
        printf("Please enter your second number: ");
        scanf("%lf", &second);


        switch(choice)
        {
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
                result = division(first,second);
                break;
            case 5: // Modulus
                result = modulus(first,second);
                break;
            //  case 6: // Power
            //     double result = pow(first,second);
            //     break;
            
        
        }
    if (result!= NAN) {
        printf("\nResult of operation is: %.2f", result);
    }
    
    }

return 0;
}



    double division(double a, double b) {
        if (b == 0) {
            fprintf(stderr, "Invalid Argument of Division");
            return NAN;
        }else {
            return a / b;
        }
    
    }

    double modulus(int a, int b) {
        if (b == 0) {
            fprintf(stderr, "Invalid Argument of Modulus");
            return NAN;
        }else {
            return a % b;
        }
    
    }



    void print_menu() {

        printf("\n\n==============================\n");
        printf("\nWelcome to Simple Calculator\n");
        printf("\nChoose one the following option: ");
        printf("\n1. Add");
        printf("\n2. Subtract");
        printf("\n3. Multiply");
        printf("\n4. Divide");
        printf("\n5. Modulus");
        printf("\n6. Power");
        printf("\n7. Exit");
        printf("\nNow enter your choice: ");
    
    
    
    }