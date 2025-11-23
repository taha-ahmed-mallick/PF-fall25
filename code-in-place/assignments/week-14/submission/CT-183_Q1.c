#include <stdio.h>
#include <string.h>

typedef struct {
    char title[30];
    char author[30];
    int price;
} Book;

int main() {
    Book book;
    strcpy(book.title, "The Hobbit");
    strcpy(book.author, "J.R.R. Tolkein");
    book.price = 200;
    printf("%s is written by %s which is of %d Rs.\n", book.title, book.author, book.price);
    return 0;
}