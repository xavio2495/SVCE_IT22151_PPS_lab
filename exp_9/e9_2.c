/*Simulate  pocket  calculator  operations  using  functions  of  various  styles
(with/without parameter/return). Pass a variable result in main() by
reference to demonstrate pass by reference.*/
#include <stdio.h>
// Functions without parameters and return values
void add(int a, int b){printf("Sum: %d\n", a + b);}
void subtract(int a, int b){printf("Difference: %d\n", a - b);}
// Functions with parameters and return values
int multiply(int a, int b){return a * b;}
float divide(int a, int b)
{
    if (b != 0){ return (float)a / b;}
    else{
        printf("Error: Cannot divide by zero.\n");
        return 0;}
}
void main()
{
    int num1, num2, result_multiply;
    char ope;
    float result_divide;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operation(+,-,*,/) :");
    scanf("	%c", &ope);
    switch (ope)
    {
    case '+':
        add(num1, num2);
        break;
    case '-':
        subtract(num1, num2);
        break;
    case '*':
        result_multiply = multiply(num1, num2);
        printf("Product: %d\n", result_multiply);
        break;
    case '/':
        result_divide = divide(num1, num2);
        printf("Quotient: %.2f\n", result_divide);
        break;
    default:
        printf("ENTER A VALID OPERATOR(+,-,*,/)");
    }
}