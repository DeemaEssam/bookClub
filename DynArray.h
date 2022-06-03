#ifndef DYNARRAY_H
#define DYNARRAY_H

#define MAX_ARR 150
#include "clubMember.h"

class DynArray{
private:

  //attributes
  clubMember **clubMemberArr;
  int size;

public:

  DynArray();
  ~DynArray();
  void print();
  void add(clubMember*);
  int find(int, clubMember**);//finding the member using his id

};
#endif
