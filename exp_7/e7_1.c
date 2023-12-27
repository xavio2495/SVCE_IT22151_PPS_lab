/*Create  a  structure  Complex  and  perform  addition,  subtraction,  and
multiplication of 2 complex numbers. */
#include <stdio.h>
#include <stdlib.h>

struct complex {
		int real;
		int img;
} c1, c2;

void main() {
		// Input section
		printf("Enter first complex number \n");
		printf("Real part: ");
		scanf("%d", &c1.real);
		printf("Imaginary part: ");
		scanf("%d", &c1.img);
		printf("Enter second complex number \n");
		printf("Real part: ");
		scanf("%d", &c2.real);
		printf("Imaginary part: ");
		scanf("%d", &c2.img);

		// Calculation section
		int realadd = c1.real + c2.real;
		int imgadd = c1.img + c2.img;
		int realsub = c1.real - c2.real;
		int imgsub = c1.img - c2.img;
		int mul1 = (c1.real * c2.real) - (c1.img * c2.img);
		int mul2 = (c1.real * c2.img) + (c1.img * c2.real);

		// Output section
		printf("\nAddition                 : %d + %di\n", realadd, imgadd);
		printf("Subtraction       	: %d %s %di\n", realsub, (imgsub >= 0) ? "+" : "-", abs(imgsub));
		printf("Multiplication    	: %d + %di\n", mul1, mul2);
}