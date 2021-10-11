#ifndef ENEMY_H
#define ENEMY_H

#include <vector>
#include "card.h"
#include "deck.h"

class Enemy : public Deck { 
public:
    int _health;
    Enemy(std::vector<Card> &input) {set = input;};
};

#endif