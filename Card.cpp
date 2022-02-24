//
//  Card.cpp
//  3
//
//  Created by Mark Liberato on 4/11/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//

#include "Card.hpp"
#include "iostream"
#include "array"
#include "string"

Card::Card(int cardSuit, int cardFace){
    face = cardFace;
    suit = cardSuit;
}

Card::~Card(){
    
}

void Card::setFace(int cardFace){
    
}

int Card::getFace(){
    return face;
}

void Card::setSuit(int cardSuit){
    
}

int Card::getSuit(){
    return suit;
}

std::string Card::toString(int cardSuit, int cardFace){
    std::array<std::string, 4> suits;
    suits[0] = "Hearts";
    suits[1] = "Diamonds";
    suits[2] = "Spades";
    suits[3] = "Clubs";
    
    std::array<std::string, 13> faces;
    faces[0] = "Ace";
    faces[1] = "2";
    faces[2] = "3";
    faces[3] = "4";
    faces[4] = "5";
    faces[5] = "6";
    faces[6] = "7";
    faces[7] = "8";
    faces[8] = "9";
    faces[9] = "10";
    faces[10] = "Jack";
    faces[11] = "Queen";
    faces[12] = "King";
    
    
    std::string card = faces[cardFace]+ " of " + suits[cardSuit];
    return card;
}

