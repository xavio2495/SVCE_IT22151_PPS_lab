/*Display the sum of ASCII values of vowels in English letters. */
//this program is a bit advanced, but try it for fun : )
#include <stdio.h>
void main()
{
    int sum = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++)
    {
        int m = (int)(vowels[i]);
        sum += m;
        printf("%c\t", vowels[i]);
    }
    printf("\n\nsum of ASCII values of vowels (lowercase) is : %d", sum);
}