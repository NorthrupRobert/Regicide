#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>
#include <string>
#include <iostream>

class Deck {
public:
    std::vector<Card> deck;

    Deck() {std::cout << "DECK INITIALIZER" << std::endl;}
    void InitializeDeck(std::vector<Card> &input)   {deck = input;  std::cout << "DECK CLASS" << std::endl;}
};

#endif