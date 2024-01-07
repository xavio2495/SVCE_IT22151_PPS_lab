/*Find the sum of digits of a number using function recursion*/
#include <stdio.h>
int rec(int n)
{
	if (n == 0) {return 0;} 
	else {return (n % 10) + rec(n / 10);}
}
void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int sum = rec(num);
	printf("Sum of digits: %d\n", sum);
}