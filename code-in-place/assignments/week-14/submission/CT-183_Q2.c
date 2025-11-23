#include <stdio.h>
#include <string.h>

typedef struct {
    char title[30];
    char author[30];
    int price;
} Book;

int main() {
    Book books[3];
    printf("Enter Details of Book\n");
    for (int i = 0; i < 3; i++) {
        printf("Detail for book %d\n", i+1);
        printf("Enter Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';
        printf("Enter the name of author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';
        printf("Enter the price: ");
        scanf("%d", &books[i].price);
        getchar();
    }
    printf("====Books Stored=====\n");
    for (int i = 0; i < 3; i++) {
        printf("\t====Book %d====\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author's Name: %s\n", books[i].author);
        printf("Price: %d Rs.\n", books[i].price);
    }
    return 0;
}