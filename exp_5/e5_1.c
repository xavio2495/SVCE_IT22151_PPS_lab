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
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the mark:");
        scanf("%d", &a[i]);
        if (a[i] > 16)
        {
            printf("Re-");
            i--;
        }
        tot += a[i];
        if (tot >= 100)
        {
            printf("\nTotal reached 100 or exceeded or.. terminating..");
            break;
        }
    }
    printf("\nThe total is:%d", tot);
}