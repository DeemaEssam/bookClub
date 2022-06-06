#include <iostream>
#include <iomanip>
#include <string>
#include "Control.h"

using namespace std;

Control::Control()//defult constructor
{
}

void Control::launch()
{

  bookClub* BookClub = new bookClub("Effat University");
  int choice = 0;
  string bookTit;
  int memId;


  initclubMembers(BookClub);
  initBooks(BookClub);

  while (1)
  {

    view.showMenu(choice);
    if (choice == 0)//stop running the program
      break;

    if (choice == 1)// printing out members
    {
      BookClub->printclubMemberes();
    }

    if (choice == 2)//printing out books information
    {
      BookClub->printBooks();
    }

    if (choice == 3)// printing out all taken books
    {
      BookClub->printTaken();
    }

    if (choice == 4)//printing out all books taken by a given member
    {
      cout << endl;

      view.printStr("Please insert member's id: ");

      view.readInt(memId);

      BookClub->printTakenByMember(memId);
      cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
    }

    if (choice == 5)//add taken book
    {
      //getting the new information from the user
      cout << endl;
      view.printStr("Please insert member's id: ");
      view.readInt(memId);

      cout << endl;
      view.printStr("Please insert book's title: ");
      view.readStr(bookTit);

      BookClub->addTaken(memId, bookTit);
    }
  }
}

void Control::initclubMembers(bookClub *bclub)
{
   cout << "---------------------------Initializing the members data-------------------------" << endl;

  bclub->addMembers(new clubMember(20106517, "Deema", "Hamidah"));
  bclub->addMembers(new clubMember(20106527, "Rehad", "Alshehri"));
  bclub->addMembers(new clubMember(20105421, "Lamar", "Abdullah"));
  bclub->addMembers(new clubMember(20108282, "Danah", "Hamidah"));
  bclub->addMembers(new clubMember(20102345, "Reema", "Ahmad"));
  bclub->addMembers(new clubMember(20109752, "Layal", "Aljabri"));
  bclub->addMembers(new clubMember(20102030, "Joudi", "Mohammad"));
  bclub->addMembers(new clubMember(20106273, "Fatma", "Salama"));
  bclub->addMembers(new clubMember(20102121, "Layan", "Alsharabi"));
  bclub->addMembers(new clubMember(20101999, "Amani", "Wadaani"));
}


void Control::initBooks(bookClub *bclub)
{

  cout << "---------------------------Initializing the book data---------------------------" << endl;

  bclub->addBooks(new Book(1, "Endings","Abdullrahman",1999));
  bclub->addBooks(new Book(2, "Origin","DanBrown",1996));
  bclub->addBooks(new Book(3, "GoneGirt","Gillian",1998));
  bclub->addBooks(new Book(4, "TheHelp","Kathryn",1998));
  bclub->addBooks(new Book(5, "MenInTheSun","Ghasan",1992));
  bclub->addBooks(new Book(6, "BetweenSisters","Kristin",2017));
  bclub->addBooks(new Book(7, "LegalSkills","Finch",2017));
}
