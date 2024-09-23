PROJECT = MyPro

$(PROJECT) : main.o hello_world.o
	g++ main.o hello_world.o -o $(PROJECT) 
   
hello.o : main.cpp 
	g++ -c main.cpp -o main.o 

hello_some.o : hello_world.cpp hello_world.h
	g++ -c hello_world.cpp -o hello_world.o

clean:
	rm $(PROJECT) *.o
