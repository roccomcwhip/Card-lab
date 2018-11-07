#include "card.h"
#include <iostream>
#include <string>



card::card(){

    rank = 0;
    color = "Red";
    suit = "Diamond";

}

card::card(std::string cardcolor, std::string cardsuit, int cardrank){

    int counter = 0;

    for(int i = 0; i < 2; i++){

        if(cardcolor == colors[i]){

            counter++;
        }
    }

    for(int i = 0; i < 4; i++){

        if(cardsuit == card::suits[i]){

            counter++;

        }
    }

    if (cardrank > 1 && cardrank < 14){

        counter++;

    }

    if ( (cardcolor == "Red") && ( (cardsuit == "Heart") || (cardsuit == "Diamond"))){

        counter++;
    }

    if((cardcolor == "Black") && ((cardsuit == "Club") || (cardsuit == "Spade"))){

        counter++;
    }

    if(counter != 5){

        std::cerr << "Card not valid";
    }
}

card::get_suit(){



}



