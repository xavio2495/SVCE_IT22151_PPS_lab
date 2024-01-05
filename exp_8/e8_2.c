/*Demonstrate the effect that changing the value through the pointer to a 
structure variable reflects the actual value of the variable. (Hint: Initialize 
a structure variable; create a pointer to the variable; modify the value 
using pointer and show the changes)*/
#include <stdio.h>
struct student {
  int a, b;
} point, *p;
void main() {
  point.a = 10;
  point.b = 20;
  printf("Before changing a=%d,b=%d", point.a, point.b);
	p=&point;
  p->a = 30;
  p->b = 40;
  printf("\nAfter changing a=%d,b=%d", point.a, point.b);
}