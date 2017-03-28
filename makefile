lab3_A: lab3_A.o
	g++ -o lab3_A lab3_A.o
lab3_A.o: lab3_A.cpp
	g++ -c lab3_A.cpp
lab3_B: lab3_B.o Clock.o
	g++ -o lab3_B lab3_B.o Clock.o
lab3_B.o: lab3_B.cpp Clock.h
	g++ -c lab3_B.cpp
Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

clean:
	rm lab3.*o
