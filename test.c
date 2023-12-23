//Linear search in 1D array.
/*#include<stdio.h>
void main()
{
    int n,v,f=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the value to search: ");
    scanf("%d",&v);
    for(int i=0;i<n;i++)
    {
        if(a[i]==v)
        {
            printf("Value found at pos- %d",i+1);
            f=1;
            break;
        }
    }
    if(f==0)
    printf("\nValue not in given array");

}*/

/*#include<stdio.h>
void main()
{
    int a[6][6]={0};
    int c_max=5;
    for(int i=0; i <6;i++)
    {
        for(int j=0; j<6;j++)
        {
            if(j<c_max)
            a[i][j]=1;
            if(j>c_max)
            a[i][j]=-1;   
        }
        --c_max;
        
    }
    for(int i=0; i <6;i++)
    {
        for(int j=0; j<6;j++)
        {
           printf("%d\t",a[i][j]);   
        }
        printf("\n");
        
    }
}*/

// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x) //x>array[mid]
      low = mid + 1;

    else //x< array[mid]
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  printf("%d",n);
  int x = 7;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}




