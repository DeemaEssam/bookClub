#include <iostream>
#include <string>
#include <iomanip>
#include "DynArray.h"

using namespace std;

DynArray::DynArray(){

  size = 0;

  clubMemberArr = new clubMember *[MAX_ARR];
}

DynArray::~DynArray(){

  for (int i=0; i<size; ++i)
      delete clubMemberArr[i];

  delete [] clubMemberArr;
}


void DynArray::add(clubMember* myclubMemberArr){

  if(size > MAX_ARR-1){
//cheak if the array is full
    cout << "FULL!" << endl;

    return;
  }
  else{

    int position=0;

    for(; position < size; position++){

      if(myclubMemberArr->lessThan(clubMemberArr[position])){
        break;

      }
    }

    for(int i=size; i > position; i--){

      clubMemberArr[i]=clubMemberArr[i-1];

    }
    clubMemberArr[position] = myclubMemberArr;
    size++;
  }
}


int DynArray::find(int memberID, clubMember** myclubMemberArr){

  for (int i = 0; i < size; i++)
  {
    if (clubMemberArr[i]->getmemberID() == memberID)
    {
      *myclubMemberArr = clubMemberArr[i];
      return true;
    }
  }

  *myclubMemberArr = nullptr;
  return false;
}


void DynArray::print(){

  const char separator = ' ';
  const int columnWidth = 16;

  cout << left << setw(columnWidth) << setfill(separator) << "memberID";
  cout << left << setw(columnWidth*2) << setfill(separator) << "FirstName";
  cout << left << setw(columnWidth) << setfill(separator) << "lastName";

  cout << endl;
  cout << "--------------------------------------------------------------------" << endl;

  cout << endl;
  for(int i = 0; i < size; ++i){
    clubMemberArr[i]->print();
    cout << endl << endl;
  }
  cout << "--------------------------------------------------------------------" << endl;
}
