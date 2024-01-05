/*Search an element in an array using function recursion*/
#include <stdio.h>
int search(int arr[], int target, int index, int size)
{
    if (index == size)
        return -1;
    else if (arr[index] == target)
        return index;
    else
        return search(arr, target, index + 1, size);
}
void main()
{
    int i, target, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Target element: ");
    scanf("%d", &target);
    int x = search(arr, target, 0, size);
    if (x == -1)
        printf("Not found");
    else
        printf("Index: %d", x);
}