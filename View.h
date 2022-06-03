#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class View
{
  public:
    void showMenu(int&);//printing out the menu
    void printStr(string);
    void readInt(int&);
    void readStr(string&);
};

#endif
