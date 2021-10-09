#include <iostream>
#include <vector>

class Card{
private:
    int _rank;
    int _suit; //1=heart, 2=diamond, 3=clover, 4=spade
public:
    Card(int rank, int suit_);
    virtual ~Card();

    int GetRank();
    int GetSuit();
};

int main() {
    Card[]
}