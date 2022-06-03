#include <iostream>
#include <string>
#include <iomanip>
#include "StatArray.h"

using namespace std;

StatArray::StatArray(){

  size = 0;
}

StatArray::~StatArray(){

  for (int i=0; i<size; ++i)
      delete bookArr[i];
}

void StatArray::add(Book* myBookArr){

  if(size > MAX_ARR-1){
    cout << "FULL!!" << endl;
    return;
  }

  else{
    int position=0;

    for(; position < size; position++){

      if(myBookArr->lessThan(bookArr[position])){
        break;
      }
    }

    for(int i=size; i > position; i--){

      bookArr[i]=bookArr[i-1];
    }

    bookArr[position] = myBookArr;
    size++;
  }
}

bool StatArray::find(string bookTitle, Book** myBookArr){

    for (int i = 0; i < size; i++)
    {
      if (bookArr[i]->getbookTitle() == bookTitle)
      {
        *myBookArr = bookArr[i];
        return true;
      }
    }
    *myBookArr = nullptr;
    return false;
  }

void StatArray::print(){

  const char separator = ' ';
  const int columnWidth = 8;

  cout << left << setw(columnWidth*2) << setfill(separator) << "bookID";
  cout << left << setw(columnWidth*2) << setfill(separator) << "bookTitle";
  cout << left << setw(columnWidth*2) << setfill(separator) << "bookAuthor";
  cout << left << setw(columnWidth*2) << setfill(separator) << "Publish year";

  cout << endl;
  cout << "--------------------------------------------------------------------" << endl;

  for(int i = 0; i < size; ++i){
    bookArr[i]->print();
    cout << endl << endl;
  }
  cout << "--------------------------------------------------------------------" << endl;

}
