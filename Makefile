TARGETS	=	project

all:	$(TARGETS)

project:	ProjectTestDriver.o clubMember.o  Book.o Taken.o DynArray.o StatArray.o bookClub.o Control.o View.o
	g++ -o project ProjectTestDriver.o clubMember.o Book.o Taken.o DynArray.o StatArray.o bookClub.o Control.o View.o

ProjectTestDriver.o:	ProjectTestDriver.cc clubMember.h  Book.h Taken.h DynArray.h StatArray.h bookClub.h Control.h View.h
	g++ -c ProjectTestDriver.cc

clubMember.o: clubMember.cc clubMember.h
	g++ -c clubMember.cc

Book.o: Book.cc Book.h
	g++ -c Book.cc

Taken.o: Taken.cc Taken.h
	g++ -c Taken.cc

DynArray.o: DynArray.cc DynArray.h
	g++ -c DynArray.cc

StatArray.o: StatArray.cc StatArray.h
	g++ -c StatArray.cc

bookClub.o: bookClub.cc bookClub.h
	g++ -c bookClub.cc

Control.o: Control.cc Control.h
	g++ -c Control.cc

View.o: View.cc View.h
		g++ -c View.cc

clean:
	rm -f *.o project
