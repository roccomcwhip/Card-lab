#ifndef __card__
#define __card__

#include <iostream>
#include <vector>
#include <string>

class card {
    private:

    int rank;
    std::string suit;
    std::string color;

    std::vector<std::string> ranks = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    std::vector<std::string> suits = {"Diamond", "Club", "Heart", "Spade"};
    std::vector<std::string> colors = {"Red", "Black"};

    public:

    card();

    card(std::string color, std::string suit, int rank);

    std::string get_suit();

    std::string get_color();

    std::string get_rank();


};




















#endif