#include "card.h"
#include <string>
#include <iostream>

void Card::InitializeCard(int suit, int rank) {
    _suit = suit;
    _rank = rank;
    if (_rank == 1)
        _value = 'A';
    else if (_rank == 10)
        _value = '%';
    else if (_rank == 11)
        _value = 'J';
    else if (_rank == 12)
        _value = 'Q';
    else if (_rank == 13)
        _value = 'K';
    else
        _value = '0' + _rank;
    if (_suit == 1)
        _face = "♥";
    else if (_suit == 2)
        _face = "♦";
    else if (_suit == 3)
        _face = "♣";
    else
        _face = "♠";
}

int Card::GetRank() const{
    return _rank;
}

int Card::GetSuit() const{
    return _suit;
}

char Card::GetValue() const{
    return _value;
}

void Card::DisplayCard() const{
    std::cout << "===========" << std::endl;
    std::cout << "|" << _value << "........|" << std::endl;
    std::cout << "|.........|" << std::endl;
    std::cout << "|.........|" << std::endl;
    std::cout << "|...." << _face << "....|" << std::endl;
    std::cout << "|.........|" << std::endl;
    std::cout << "|.........|" << std::endl;
    std::cout << "|........" << _value << "|" << std::endl;
    std::cout << "===========" << std::endl;
}