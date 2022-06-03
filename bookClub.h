#ifndef BOOKCLUB
#define BOOKCLUB_H

#include "DynArray.h"
#include "StatArray.h"
#include "Taken.h"
#include "clubMember.h"
#include "Book.h"
#include <string>

#define MAX_ARR 150

class bookClub{
    private:
      //attributes
      string name;
      DynArray collectionOfMembers;
      StatArray collectionOfBooks;
      Taken *collecTaken[MAX_ARR];
      int numTaken;


    public:

      bookClub();
      bookClub(string);
      ~bookClub();
      void addMembers(clubMember*);
      void addBooks(Book*);
      void addTaken(int, string);//adding Taken using member's id and book's name
      void printBooks();
      void printclubMemberes();
      void printTaken();
      void printTakenByMember(int);//print member's firstName along with the taken book

};
#endif
