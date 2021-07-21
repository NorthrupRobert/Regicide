#ifndef ENEMY_H
#define ENEMY_H

#include <vector>
#include "card.h"
#include "deck.h"

class Enemy : public Deck{
private:
    int _health;
    std::vector<Card> _deck;
public:
    Enemy(std::vector<Card> &input) {_deck = input;}
    //void InitializeEnemy(std::vector<Card> input);
};

#endif