#ifndef BOOK_H
#define BOOK_H

using namespace std;

class Book{
private:

  //attributes
  int bookID;
  string bookTitle;
  string bookAuthor;
  int bookYear;

public:

  //methods
  Book(); //default constructor
  Book(int, string, string, int); //constructor
  int getbookID(); //getter id
  string getbookTitle();
  int getbookYear();
  string getbookAuthor();
  bool lessThan(Book*);
  void print();
};
#endif
