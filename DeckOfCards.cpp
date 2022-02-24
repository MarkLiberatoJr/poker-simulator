//
//  DeckOfCards.cpp
//  3
//
//  Created by Mark Liberato on 4/11/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//

#include "DeckOfCards.hpp"
#include "Card.hpp"
#include "iostream"
#include "array"
#include "vector"
#include "string"
#include "ctime"
#include "cstdlib"

DeckOfCards::DeckOfCards(){
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            Card newCard(i,j);
            deck.push_back(newCard);
        }
    }
    
}

DeckOfCards::~DeckOfCards(){
    
}

std::vector<Card> DeckOfCards::shuffleDeck(std::vector<Card> deck){
    for (int i = 0; i < 52; i++){
        int randCard = rand()%52;
        Card setCard(0,0);
        setCard = deck[randCard];
        deck[randCard] = deck[i];
        deck[i] = setCard;
    }
    
    return deck;
    
    
}

Card DeckOfCards::dealCard(int currentCard, std::vector<Card> deck){
    
    return deck[currentCard];
}

bool DeckOfCards::moreCards(int currentCard, std::vector<Card> deck){
    bool moreCards = false;
    if (currentCard < deck.size()){
        moreCards = true;
    }
    return moreCards;
}
