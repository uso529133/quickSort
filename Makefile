all : quickSort

quickSort: main.cpp
	g++ --std=c++11 -o quickSort main.cpp

clean:
	rm -f quickSort
	rm -f *.o
