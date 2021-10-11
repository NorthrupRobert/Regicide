#include <iostream>
#include <vector>
#include <ctime>
#include "card.h"
#include "enemy.h"
#include "deck.h"

#define cls std::system("clear")
int maxHandSize = 8;

void Title();
void MainMenu();
void InitializeGame();

int main() {
    //TITLE, MAIN MENU, INSTRUCTIONS . . .
    MainMenu();

    InitializeGame();

    return 0;
}

void InitializeGame() {
    std::vector<Card> moveDeck;

    //INITIALIZING ALL CARDS (ALL OBJECTS), INTO THE ENEMY SET AND GENERAL SET, TAVERN
    //(hand will dispense later from the tavern, discard is empty)
    Card card[4][13];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            card[i][j].InitializeCard(i + 1, j + 1);

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 10; j++)
            moveDeck.push_back(card[i][j]);
    Deck theTavern(moveDeck);
    moveDeck.clear();

    for (int i = 0; i < 4; i++)
        for (int j = 10; j < 13; j++)
            moveDeck.push_back(card[i][j]);
    Enemy theEnemy(moveDeck);
    moveDeck.clear();

    //SHUFFLE DECKS
    theTavern.Shuffle();
    theTavern.TakeCards(maxHandSize, moveDeck);
    Deck theHand(moveDeck);
    Deck theDiscard();
}

void MainMenu() {
    cls;
    Title();
}

void Title() {
    std::cout << " _______  _______  _______ _________ _______ _________ ______   _______" << std::endl;
    std::cout << "(  ____ )(  ____ \\(  ____ \\\\__   __/(  ____ \\\\__   __/(  __  \\ (  ____ \\" << std::endl;
    std::cout << "| (    )|| (    \\/| (    \\/   ) (   | (    \\/   ) (   | (  \\  )| (    \\/" << std::endl;
    std::cout << "| (____)|| (__    | |         | |   | |         | |   | |   ) || (__    " << std::endl;
    std::cout << "|     __)|  __)   | | ____    | |   | |         | |   | |   | ||  __)   " << std::endl;
    std::cout << "| (\\ (   | (      | | \\_  )   | |   | |         | |   | |   ) || (      " << std::endl;
    std::cout << "| ) \\ \\__| (____/\\| (___) |___) (___| (____/\\___) (___| (__/  )| (____/\\" << std::endl;
    std::cout << "|/   \\__/(_______/(_______)\\_______/(_______/\\_______/(______/ (_______/" << std::endl;
}