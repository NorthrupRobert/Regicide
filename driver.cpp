#include <iostream>
#include <vector>
#include <ctime>
#include "card.h"
#include "enemy.h"
//#include "deck.h"

#define cls std::system("clear")

void Title();
void MainMenu();
void ShuffleDeck(std::vector<Card> &deck);

int main() {
    std::vector<Card> tavern;
    std::vector<Card> discarded;
    std::vector<Card> hand;
    std::vector<Card> temp;

    //INITIALIZING ALL CARDS (ALL OBJECTS)
    Card card[4][13];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            card[i][j].InitializeCard(i + 1, j + 1);

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 10; j++)
            tavern.push_back(card[i][j]);

    for (int i = 0; i < 4; i++)
        for (int j = 10; j < 13; j++)
            temp.push_back(card[i][j]);

    Enemy theEnemy(temp);

    //TITLE, MAIN MENU, INSTRUCTIONS . . .
    cls;
    Title();
    

    std::cout << std::endl;
    tavern.at(12).DisplayCard();
    ShuffleDeck(tavern);
    std::cout << std::endl;
    tavern.at(12).DisplayCard();

    return 0;
}

void ShuffleDeck(std::vector<Card> &deck) {
    srand(time(0));
    int size = deck.size();
    int changeIndex;
    Card tempCard;

    for (int i = 0; i < size; i++) {
        changeIndex = (rand() % size);
        tempCard = deck.at(changeIndex);
        deck.at(changeIndex) = deck.at(i);
        deck.at(i) = tempCard;
    }
}

void MainMenu() {

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