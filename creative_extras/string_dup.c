#include <stdio.h>
#include <string.h>
void main()
{
	char str[20];
    printf("\nEnter a string: ");
    scanf(" %s",str);
	int n = sizeof(str), index = 0;
	for (int i = 0; i < n; i++) {
        int j;
		for (j = 0; j < i; j++) {
			if (str[i] == str[j])
				break;
		}
		if (j == i)
			str[index++] = str[i];
	}
	str[index] = '\0';
    printf("String after removing duplicates: %s",str);
}