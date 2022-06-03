#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

#include "View.h"

void View::showMenu(int& choice)
{
  cout << endl << endl;
  cout << "What would you like to do:"<< endl;
  cout << "  (1) Print members" << endl;
  cout << "  (2) Print books" << endl;
  cout << "  (3) Print all books taken" << endl;
  cout << "  (4) Print book taken by member" << endl;
  cout << "  (5) Add book taken by member" << endl;
  cout << "  (0) Exit" << endl<<endl;

  cout << "Enter your selection: ";
  cin >> choice;
  if (choice == 0)
    return;

  while (choice < 1 || choice > 5) {

    cout << "Enter your selection: ";
    cin >> choice;
  }

}

void View::printStr(string str)
{
  cout << str;
}

void View::readInt(int& n)
{
  cin >> n;
}

void View::readStr(string& str)
{
  cin >> str;
}
