#ifndef STATARRAY_H
#define STATARRAY_H

#define MAX_ARR 150
#include "Book.h"

class StatArray{
  private:

    //attributes
    Book *bookArr[MAX_ARR];
    int size;

  public:

    //methods
    StatArray();
    ~StatArray();
    void print();
    void add(Book*);
    bool find(string, Book**);//finding the book using its name
};
#endif
