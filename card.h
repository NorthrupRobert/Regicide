#ifndef CARD_H
#define CARD_H

#include <string>

class Card{
public:
    int _suit;
    int _rank;
    char _value;
    std::string _face;

    Card() {

    }
    void InitializeCard(int suit, int rank);
    //virtual ~Card();

    int GetRank();
    int GetSuit();
    void DisplayCard();
};

#endif