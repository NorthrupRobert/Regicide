regicide: driver.o
	g++ driver.o -o regicide
driver.o: driver.cpp
	g++ -c driver.cpp
make clean:
	rm *.o regicide