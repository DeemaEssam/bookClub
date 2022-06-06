#include <iostream>
#include <string>
#include <iomanip>
#include "Taken.h"

using namespace std;

Taken::Taken(){

  ptrclubMember = nullptr;
  ptrBook = nullptr;
}

Taken::Taken(clubMember* myptrclubMember, Book* myptrBook){

  ptrclubMember = myptrclubMember;
  ptrBook = myptrBook;
}


clubMember* Taken::getclubMember(){

  return ptrclubMember;
}


Book* Taken::getBook(){

  return ptrBook;
}


void Taken::print(){

  const char separator = ' ';
  const int columnWidth = 16;
  cout << left << setw(columnWidth) << setfill(separator) << ptrclubMember->getmemberID();
  cout << left << setw(columnWidth) << setfill(separator) << ptrclubMember->getfirstName();//get member's firstname
  cout << left << setw(columnWidth) << setfill(separator) << ptrclubMember->getlastName();//get member's lastname
  cout << left << setw(columnWidth) << setfill(separator) << ptrBook->getbookID();
  cout << left << setw(columnWidth+8) << setfill(separator) << ptrBook->getbookTitle();
  cout << left << setw(columnWidth) << setfill(separator) << ptrBook->getbookAuthor();
  cout << left << setw(columnWidth) << setfill(separator) << ptrBook->getbookYear();
}
