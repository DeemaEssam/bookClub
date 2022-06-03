#include <iostream>
#include <string>
#include <iomanip>
#include "Book.h"
using namespace std;

Book::Book(){

  bookID = 0;
  bookTitle = "";
  bookAuthor = "";
  bookYear = 0;
} //default constructor


Book::Book(int book_id , string book_title, string book_author, int book_year){

  bookID = book_id;
  bookTitle = book_title;
  bookAuthor = book_author;
  bookYear = book_year;

} //overloaded constructor

int Book::getbookID(){

  return bookID;
} //getter id


string Book::getbookTitle(){

  return bookTitle;
}

int Book::getbookYear(){

  return bookYear;
}


string Book::getbookAuthor(){

  return bookAuthor;
}


bool Book::lessThan(Book* otherBook){

  if(bookTitle < otherBook->bookTitle)
  {
    return true;
  }

  else if(bookTitle == otherBook->bookTitle)
        {
          if(bookAuthor < otherBook->bookAuthor)
          {
            return true;
          }
          else if(bookAuthor == otherBook->bookAuthor)
          {
            if(bookID < otherBook->bookID){
             return true;
           }

           else if(bookID == otherBook->bookID)
           {
             if(bookYear < otherBook->bookYear)
             {
               return true;
             }
             else{
               return false;
             }
           }
     else
     {
       return false;
     }
    }
    else
    {
      return false;
    }
  }
  else
  {
    return false;
  }

}


void Book::print(){

  const char separator = ' ';
  const int columnWidth = 8;

  cout << left << setw(columnWidth*2) << setfill(separator) << bookID;
  cout << left << setw(columnWidth*3) << setfill(separator) << this->getbookTitle();
  cout << left << setw(columnWidth*2) << setfill(separator) << bookAuthor;
  cout << left << setw(columnWidth*2) << setfill(separator) << bookYear;

}
