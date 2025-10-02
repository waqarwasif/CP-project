#include<stdio.h>

void menu() {
    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Exit\n");
}

int add(int x, int y) {
    return x + y;
}
int subtract(int x, int y) {
    return x - y;
}
int multiply(int x, int y) {
    return x * y;
}
float divide(int x, int y) {
    if (y != 0)
        return (float)x / y;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
float power(int base,int exp) {
    float result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    return result;
}
int main(){
    int choice, a, b;
    menu();
    printf("Enter choice (1-6): ");
    scanf("%d", &choice);
    if(choice == 5){
        printf("Enter base and exponent: ");
        scanf("%d %d ", &a,&b);
        printf("Result: %.2f\n", power(a,b));
        return 0;
    }
    else if(choice == 6){
        printf("Exiting...\n");
        return 0;
    }
    printf("Enter two integers: ");
    scanf("%d %d", &a,&b);

    switch(choice) {
        case 1:
            printf("Result: %d\n", add(a, b));
            break;
        case 2:
            printf("Result: %d\n", subtract(a, b));
            break;
        case 3:
            printf("Result: %d\n", multiply(a, b));
            break;
        case 4:
            printf("Result: %.2f\n", divide(a, b));
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;

}