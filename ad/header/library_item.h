// library_item.h
#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>

class LibraryItem {
private:
    std::string title;
    bool isCheckedOut;
    std::string dueDate;

public:
    LibraryItem(const std::string& title);
    std::string getTitle() const;
    bool getIsCheckedOut() const;
    std::string getDueDate() const;
    void setTitle(const std::string& title);
    void setCheckedOut(bool isCheckedOut);
    void setDueDate(const std::string& dueDate);

    // Additional member functions for checkOut() and returnItem() could be added here.
};

#endif // LIBRARY_ITEM_H