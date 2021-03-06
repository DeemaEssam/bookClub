#include <iostream>
#include <string>
#include <iomanip>
#include "bookClub.h"

using namespace std;

bookClub::bookClub(){

  name = "";
  numTaken = 0;
}

bookClub::bookClub(string clubName){

  name = clubName;
  numTaken = 0;
}

bookClub::~bookClub(){
  cout << "-----------------------------Deleting Dynamic Object--------------------------------" << endl;
  for (int i=0; i<numTaken; ++i)
      delete collecTaken[i];
}

void bookClub::addMembers(clubMember* newclubMember){
//add member in the array
  collectionOfMembers.add(newclubMember);

}

void bookClub::addBooks(Book* newBook){
//add book in the array
  collectionOfBooks.add(newBook);
}

void bookClub::addTaken(int memId, string bookName){

  if(numTaken > MAX_ARR-1)
  {
    cout << endl;
    cout << "FULL" << endl;//check if the array is full
    return;
  }

  else{

      clubMember* idMem1;
      Book* book1;
      Taken* taken1;

      collectionOfMembers.find(memId, &idMem1);


      collectionOfBooks.find(bookName, &book1);

      if(!idMem1)
      {
        cout << endl;
        cout<<"---------------Member is not FOUND!!-------------" <<endl;

        return;
      }

      else if(!book1){

        cout << endl;
        cout<<"---------------Book is not FOUND!!-------------" <<endl;

        return;
      }

      else{

          taken1 = new Taken(idMem1,book1);

          collecTaken[numTaken] = taken1;

          numTaken++;

          cout << endl;
          cout<<"-----------Taken book added seccfully!!--------" << endl;
        }
      }
}

void bookClub::printclubMemberes(){

  cout<<endl;
  cout<<"--------------------------------------------"<<endl;
  cout<<"         Members list at the club           "<<endl;
  cout<<"--------------------------------------------"<<endl;
  collectionOfMembers.print();
}

void bookClub::printBooks(){

  cout << endl;
  cout << "--------------------------------------------------------------------" <<endl;
  cout << "                              Books list                            " <<endl;
  cout << "--------------------------------------------------------------------" <<endl;
  collectionOfBooks.print();
}

void bookClub::printTaken(){

  if(numTaken == 0)
  {
    cout << endl;
    cout<<"----------------No Books Taken yet-------------"<<endl;
  }
  else{
    const char separator = ' ';
    const int columnWidth = 8;

    cout << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                                                 Taken list                       " << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------" <<endl;
    cout << left << setw(columnWidth*2) << setfill(separator) << "memberID";
    cout << left << setw(columnWidth*2) << setfill(separator) << "firstName";
    cout << left << setw(columnWidth*2) << setfill(separator) << "lastName";
    cout << left << setw(columnWidth*2) << setfill(separator) << "bookID";
    cout << left << setw(columnWidth*3) << setfill(separator) << "bookTitle";
    cout << left << setw(columnWidth*2) << setfill(separator) << "bookAuthor";
    cout << left << setw(columnWidth*2) << setfill(separator) << "Publish year";
    cout << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i=0; i < numTaken; ++i){

      collecTaken[i]->print();
      cout << endl;
    }
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
    }
}

void bookClub::printTakenByMember(int memId){

  if(numTaken==0)
  {
    cout << endl;
    cout<<"------------------ member is not added yet-------------"<<endl;
  }
  else{
    clubMember *memID = nullptr;


    const char separator = ' ';
    const int columnWidth = 8;

    if(collectionOfMembers.find(memId, &memID))
    {
    cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                               books taken by '"<<memId<<"'"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
    cout << left << setw(columnWidth*2) << setfill(separator) << "memberID";
    cout << left << setw(columnWidth*2) << setfill(separator) << "firstName";
    cout << left << setw(columnWidth*2) << setfill(separator) << "lastName";
    cout << left << setw(columnWidth*2) << setfill(separator) << "bookID";
    cout << left << setw(columnWidth*3) << setfill(separator) << "bookTitle";
    cout << left << setw(columnWidth*2) << setfill(separator) << "bookAuthor";
    cout << left << setw(columnWidth*2) << setfill(separator) << "Publish year"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;

    for (int i = 0; i < numTaken; ++i)
    {
        if (collecTaken[i]->getclubMember()->getmemberID() == memId)
        {
          cout << left << setw(columnWidth*2) << setfill(separator) << collecTaken[i]->getclubMember()->getmemberID();
          cout << left << setw(columnWidth*2) << setfill(separator) << collecTaken[i]->getclubMember()->getfirstName();
          cout << left << setw(columnWidth*2) << setfill(separator) << collecTaken[i]->getclubMember()->getlastName();
          collecTaken[i]->getBook()->print();
          cout<<endl;
        }
      }
    }

      else
      {
        cout << endl;
        cout<<"---------------Member is not FOUND!!-------------" <<endl;
        return;
      }
  }
}
