#ifndef HAND_H
#define HAND_H

#include <vector>
#include "deck.h"
#include "card.h"

class Hand : public Deck {
public:
    int _health;
    int _df;
    bool dead;

    Hand(std::vector<Card> &input) {set = input; dead = false;}
    void InitializeHand() {
        _health = 0;
        _df = 0;
        for (int i = 0; i < set.size(); i++)
            _health += set.at(i)._rank;
    }
    void TakeCard(int index, std::vector<Card> &moveDeck) {
        std::vector<Card> temp;
        moveDeck.clear();

        moveDeck.push_back(set.at(index));
        for (int i = 0; i < index; i++)
            temp.push_back(set.at(i));
        for (int i = index + 1; i < set.size(); i++)
            temp.push_back(set.at(i));
        set = temp;
    }
};

#endif