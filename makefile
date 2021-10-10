regicide: driver.o card.o card.h displaycard.o deck.o deck.h enemy.o enemy.h
	g++ driver.o card.o card.h -o regicide
driver.o: driver.cpp
	g++ -c driver.cpp
card.o: card.cpp
	g++ -c card.cpp
displaycard.o: displaycard.cpp
	g++ -c displaycard.cpp
deck.o: deck.cpp
	g++ -c deck.cpp
enemy.o: enemy.cpp
	g++ -c enemy.cpp
make clean:
	rm *.o regicide