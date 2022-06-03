#ifndef CLUBMEMBER_H
#define CLUBMEMBER_H
using namespace std;

class clubMember{
  private:

    //attributes
    int memberID;
    string firstName;
    string lastName;

  public:

    //methods
    clubMember();
    clubMember(int, string, string);
    void setmemberID(int);
    void setfirstName(string);
    void setlastName(string);
    int getmemberID();
    string getfirstName();
    string getlastName();
    bool lessThan(clubMember*);
    void print();
};
#endif
