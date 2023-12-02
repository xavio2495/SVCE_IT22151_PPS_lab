/*Prof. Siva awards marks for N questions in the range 0-16. Support him in
finding the total. Ensure the following:
a. Only numbers are entered
b. If he awards marks out of the range, ask him to re-enter the mark
c.  limit the total to 100 */

#include <stdio.h>
void main()
{
    int n, tot = 0;
    printf("Enter the number of questions: ");
    scanf("%d", &n); // getting user input for how many question are to be evaluated
    int a[n];        // initialising array
    for (int i = 0; i < n; i++)
    {
        printf("Enter the mark:");
        scanf(" %d", &a[i]); // getting user input for marks
        if (a[i] > 16)      // checking if the value is greater than 16
        {
            printf("Re-");
            i--; // reducing value of i, so the next iteration is same as this one
            continue;
        }
        tot += a[i]; // adding all the valid marks given by the user
        if (tot >= 100)
        {
            printf("\nTotal  exceeded or reached 100 or.. terminating..");
            break;//ending thes for loop if total is greater than 100
        }
    }
    printf("\nThe total is:%d", tot);
}