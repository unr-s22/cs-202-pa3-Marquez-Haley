pa3: main.cpp Account.o Money.o
	g++ -std=c++11 -o pa3 main.cpp Account.o Money.o

Account.o: Account.cpp Account.h
	g++ -std=c++11 -c Account.cpp

Money.o: Money.cpp Money.h
	g++ -std=c++11 -c Money.cpp

Clean:
	rm pa3 *.o
