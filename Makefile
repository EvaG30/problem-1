## Молодец, что сама написала Makefile!
PROJECT = MyPro

$(PROJECT) : hello.o hello_some.o
	g++ hello.o hello_some.o -o $(PROJECT) 
   
hello.o : hello.cpp 
	g++ -c hello.cpp -o hello.o 

hello_some.o : hello_some.cpp hello_some.h
	g++ -c hello_some.cpp -o hello_some.o

clean:
	rm $(PROJECT) *.o
