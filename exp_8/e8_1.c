/*Implement a Pocket calculator with arithmetic operators (include
increment/decrement also).*/
#include <stdio.h>
void main() 
{
    int a, b, *pa, *pb, result;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /,increment(i),decrement(d)): ");
    scanf(" pointer %c", &op);
    pa = &a;
    pb = &b;
    switch (op) {
        case '+':
            result = *pa + *pb;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = *pa - *pb;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = *pa * *pb;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (*pb != 0)
                printf("Result: %d\n",*pa / *pb);
             else 
                printf("Error: Division by zero\n");
            break;
        case 'i':
            (*pa)++;
            (*pb)++;
            printf("Incremented values: a = %d, b = %d\n", *pa, *pb);
            break;
        case 'd':
            (*pa)--;
            (*pb)--;
            printf("Decremented values: a = %d, b = %d\n", *pa, *pb);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
}