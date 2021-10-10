#ifndef ENEMY_H
#define ENEMY_H

#include <vector>
#include "card.h"
#include "deck.h"

class Enemy : public Deck{
private:
    int _health;
public:
    Enemy(std::vector<Card> &input) {deck = input; std::cout << "ENEMY CLASS" << std::endl;}
    //void InitializeEnemy(std::vector<Card> input);
};

#endif