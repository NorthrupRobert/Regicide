#ifndef ENEMY_H
#define ENEMY_H

#include <vector>
#include <ctime>
#include "card.h"
#include "deck.h"

class Enemy : public Deck { 
public:
    int _health;
    int _suit;
    int _rank;

    Enemy(std::vector<Card> &input) {
        set = input;
    }

    void InitializeEnemy() {
        _health = 0;

        if (set.at(0)._rank == 11)
            _health = 10;
        else if (set.at(0)._rank == 12)
            _health = 15;
        else
            _health = 20;
    }

    void ShuffleEnemy() {
        srand(time(0));
        int changeIndex;
        Card tempCard;

        for (int t = 0; t < 3; t++) { //three ranks
            for (int i = 0; i < 4; i++) { //four types of suits within that rank
                changeIndex = ((rand() % 4) + (t * 4));
                tempCard = set.at(changeIndex);
                set.at(changeIndex) = set.at(i + (t * 4));
                set.at(i + (t * 4)) = tempCard;
            }
        }
    }
};

#endif