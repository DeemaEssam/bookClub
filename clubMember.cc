#include <iostream>
#include <string>
#include <iomanip>
#include "clubMember.h"
using namespace std;

clubMember::clubMember(){

  memberID = 0;
  firstName = "";
  lastName = "";
}

clubMember::clubMember(int member_id, string first_name, string last_name){

  memberID = member_id;
  firstName = first_name;
  lastName = last_name;
}


void clubMember::setmemberID(int member_id){

  memberID = member_id;
}

void clubMember::setfirstName(string first_name){

  firstName = first_name;
}

void clubMember::setlastName(string last_name){

  lastName = last_name;
}

int clubMember::getmemberID(){

  return memberID;
}


string clubMember::getfirstName(){

  return firstName;
}


string clubMember::getlastName(){

  return lastName;
}


bool clubMember::lessThan(clubMember* otherclubMember){

  return firstName < otherclubMember->firstName;
}

void clubMember::print(){

  const char separator = ' ';
  const int columnWidth = 16;

   cout << left << setw(columnWidth) << setfill(separator) << memberID;
   cout << left << setw(columnWidth*2) << setfill(separator) << firstName;
   cout << left << setw(columnWidth) << setfill(separator) << lastName;

}
