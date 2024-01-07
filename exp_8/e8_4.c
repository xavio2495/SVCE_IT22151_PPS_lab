/*Read and display the details of N books where each book has
<ISBN,title,price,author>.*/
#include <stdio.h>
#include <stdlib.h>
struct Book
{
    char ISBN[20];
    char title[100];
    float price;
    char author[100];
};
void main()
{
    int N;
    printf("Enter the number of books (N): ");
    scanf("%d", &N);
    struct Book *books = calloc(N, sizeof(struct Book));
    for (int i = 0; i < N; ++i)
    {
        printf("Enter details for Book %d:\n", i + 1);
        printf("ISBN: ");
        scanf("%s", (books + i)->ISBN);
        printf("Title: ");
        scanf("%s", (books + i)->title);
        printf("Price: ");
        scanf("%f", &(books + i)->price);
        printf("Author: ");
        scanf("%s", (books + i)->author);
    }
    printf("\nDetails of the books:\n");
    for (int i = 0; i < N; ++i)
    {
        printf("\nBook %d:\n", i + 1);
        printf("ISBN: %s\n", (books + i)->ISBN);
        printf("Title: %s\n", (books + i)->title);
        printf("Price: $%.2f\n", (books + i)->price);
        printf("Author: %s\n", (books + i)->author);
    }
    free(books);
}