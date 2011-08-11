all:
	${MAKE} hw1prob1 hw1prob2 hw1prob3
hw1prob1: hw1prob1.o makeGen2dArray.o freeGen2dArray.o
	g++ -g -Wall -o hw1prob1 hw1prob1.o makeGen2dArray.o freeGen2dArray.o
hw1prob1.o: hw1prob1.cpp
	g++ -g -Wall -c hw1prob1.cpp
makeGen2dArray.o: makeGen2dArray.cpp
	g++ -g -Wall -c makeGen2dArray.cpp
freeGen2dArray.o: freeGen2dArray.cpp
	g++ -g -Wall -c freeGen2dArray.cpp
hw1prob2: hw1prob2.o addEven2OddLines.o
	g++ -g -Wall -o hw1prob2 hw1prob2.o addEven2OddLines.o
hw1prob2.o: hw1prob2.cpp
	g++ -g -Wall -c hw1prob2.cpp
addEven2OddLines.o: addEven2OddLines.cpp
	g++ -g -Wall -c addEven2OddLines.cpp
hw1prob3: hw1prob3.o
	g++ -g -Wall -o hw1prob3 hw1prob3.o
hw1prob3.o: hw1prob3.cpp
	g++ -g -Wall -c hw1prob3.cpp
clean:
	rm *.o hw1prob1 hw1prob2 hw1prob3