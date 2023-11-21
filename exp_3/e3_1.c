/*Ram, Balaji, and Kumar are siblings aged x,y, and z respectively. Find the
youngest and oldest among them.*/

#include <stdio.h>
#include <string.h> //only for ternary operator
void main()
{
    int x, y, z;
    printf("Enter the ages of Ram, Balaji and Kumar: \n");
    scanf("%d%d%d", &x, &y, &z); // getting ages from user

    // normal way using if/else-if/else
    if (x > y && x > z) // checking is x is the largest among the three
    {
        printf("\nRam(%d) is the oldest", x);
    }
    else if (y > x && y > z) // checking is y is the largest among the three
    {
        printf("\nBalaji(%d) is the oldest", y);
    }
    else // will print z as the largest if neither of the two conditions are true
    {
        printf("\nKumar(%d) is the oldest", z);
    }

    if (x < y && x < z) // checking is x is the smallest among the three
    {
        printf("\nRam(%d) is the youngest", x);
    }
    else if (y < x && y < z) // checking is y is the smallest among the three
    {
        printf("\nBalaji(%d) is the youngest", y);
    }
    else // will print z as the smallest if neither of the two conditions are true
    {
        printf("\nKumar(%d) is the youngest", z);
    }

    // Alternative method for those who hate to write long code [ternary operator]
    char max[20] = "", min[20] = "";
    (x > y) ? (x > z) ? strcpy(max, "Ram") : strcpy(max, "Kumar") : (y > z) ? strcpy(max, "Balaji"): strcpy(max, "Kumar");
    (x < y) ? (x < z) ? strcpy(min, "Ram") : strcpy(min, "Kumar") : (y < z) ? strcpy(min, "Balaji"): strcpy(min, "Kumar");
    printf("\n %s is the oldest", max);
    printf("\n %s is the youngest", min);

    // Please dont mug up both versions of the code (•_• )
}