#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>
#include <string>

class Deck {
public:
    std::vector<Card> deck;

    Deck();
    void InitializeDeck(std::vector<Card> &input)   {deck = input;  std::cout << "DECK CLASS" << std::endl;}
};

#endif