// main.cpp
#include <iostream>
#include "header/book.h"
#include "header/patron.h"
#include "header/library_item.h"
#include "header/book_item.h"
#include "header/patron_record.h"
#include "header/library.h"

int main() {
    // Create books
    BookItem book1("Introduction to Programming", "John Smith", "978-0-123456-78-9");
    BookItem book2("Data Structures and Algorithms", "Jane Doe", "978-0-987654-32-1");

    // Create a patron
    Patron patron("Aibinu Maryam Abolanle", "7/01/24");

    // Create a library
    Library library;

    // Add books to the library
    library.addBook(book1);
    library.addBook(book2);

    // Add the patron to the library
    library.addPatron(patron);

    // Display information about the books in the library
    std::cout << "Books in the library:" << std::endl;
    for (const BookItem& book : library.getBooks()) {
        std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", ISBN: " << book.getISBN() << std::endl;
    }

    // Display information about the patron
    std::cout << "\nPatron information:" << std::endl;
    std::cout << "Name: " << patron.getName() << ", Library Card Number: " << patron.getLibraryCardNumber() << std::endl;

    // Patron borrows a book
    library.borrowBook(patron, book1);

    // Display patron's checked out books
    std::cout << "\nBooks checked out by the patron:" << std::endl;
    for (const BookItem& checkedOutBook : library.getPatronRecord(patron).getCheckedOutBooks()) {
        std::cout << "Title: " << checkedOutBook.getTitle() << ", Author: " << checkedOutBook.getAuthor() << ", ISBN: " << checkedOutBook.getISBN() << std::endl;
    }

    // Patron returns a book
    library.returnBook(patron, book1);

    // Display updated patron's checked out books
    std::cout << "\nBooks checked out by the patron after returning a book:" << std::endl;
    for (const BookItem& checkedOutBook : library.getPatronRecord(patron).getCheckedOutBooks()) {
        std::cout << "Title: " << checkedOutBook.getTitle() << ", Author: " << checkedOutBook.getAuthor() << ", ISBN: " << checkedOutBook.getISBN() << std::endl;
    }

    return 0;
}