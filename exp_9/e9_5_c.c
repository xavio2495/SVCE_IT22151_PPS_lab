/*Print the marks in letters using function recursion*/
#include <stdio.h>
void converter(int mark)
{
    static char word[11][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (mark == 0){return;}
    converter(mark / 10);
    int digit = mark % 10;
    printf("%s ", word[digit]);
}
void main()
{
    int mark;
    printf("Enter the exam marks:");
    scanf("%d", &mark);
    converter(mark);
}
