#ifndef CONTROL_H
#define CONTROL_H


#include "bookClub.h"
#include "View.h"

class Control
{
//private members
	private:
		View view;
		bookClub BookClub;

	public:
		Control();
		void launch();
		void initclubMembers(bookClub* bclub);//memberss data
		void initBooks(bookClub* bclub);//books data

};

#endif
