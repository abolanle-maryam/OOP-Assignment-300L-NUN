// library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book_item.h"
#include "patron.h"
#include "patron_record.h"

class Library {
private:
    std::vector<BookItem> books;
    std::vector<Patron> patrons;
    std::vector<PatronRecord> patronRecords;

public:
    // Functions for managing books and patrons, borrowing and returning books
    void addBook(const BookItem& book);
    void removeBook(const BookItem& book);
    void addPatron(const Patron& patron);
    void removePatron(const Patron& patron);
    void borrowBook(const Patron& patron, const BookItem& book);
    void returnBook(const Patron& patron, const BookItem& book);
};

#endif // LIBRARY_H