#ifndef TAKEN_H
#define TAKEN_H
using namespace std;

#include "Book.h"
#include "clubMember.h"

class Taken{
  private:
    //attributes
    clubMember* ptrclubMember;
    Book* ptrBook;
    //int rate;

  public:

    //methods
    Taken();
    Taken(clubMember*, Book*);
    clubMember* getclubMember();
    Book* getBook();
    void print();
};
#endif
