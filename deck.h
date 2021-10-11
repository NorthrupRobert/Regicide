#ifndef DECK_H
#define DECK_H

#include <vector>
#include <string>
#include <iostream>
#include "card.h"

class Deck {
public:
    std::vector<Card> set;

    Deck(){}
    Deck(std::vector<Card> &input) {
        set = input;
    }
    void Shuffle() {
        srand(time(0));
        int size = set.size();
        int changeIndex;
        Card tempCard;

        for (int i = 0; i < size; i++) {
            changeIndex = (rand() % size);
             tempCard = set.at(changeIndex);
             set.at(changeIndex) = set.at(i);
             set.at(i) = tempCard;
        }
    }
    void DisplayCard(int index) {
        set.at(index).DisplayCard();
    }
    void TakeCards(int numCards, std::vector<Card> &moveDeck) {
        std::vector<Card> temp;
        moveDeck = temp;

        for (int i = 0; i < numCards; i++)
            moveDeck.push_back(set.at(i));
        for (int i = numCards; i < set.size(); i++)
            temp.push_back(set.at(i));
        set = temp;
    }
    void AddCards(bool front, std::vector<Card> &moveDeck) {
        if (front) {
            for (int i = 0; i < set.size(); i ++)
                moveDeck.push_back(set.at(i));
            set = moveDeck;
        }
        else {
            for (int i = 0; i < moveDeck.size(); i++)
                set.push_back(moveDeck.at(i));
        }
    }
    int GetSize() {
        return set.size();
    }
};

#endif