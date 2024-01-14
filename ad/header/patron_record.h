// patron_record.h
#ifndef PATRON_RECORD_H
#define PATRON_RECORD_H

#include <vector>
#include "book_item.h"

class PatronRecord {
private:
    std::vector<BookItem> checkedOutBooks;

public:
    // Functions for managing checked out books
    void addCheckedOutBook(const BookItem& book);
    void removeCheckedOutBook(const BookItem& book);
    std::vector<BookItem> getCheckedOutBooks() const;
};

#endif // PATRON_RECORD_H   