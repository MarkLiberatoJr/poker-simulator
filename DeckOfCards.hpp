//
//  DeckOfCards.hpp
//  3
//
//  Created by Mark Liberato on 4/11/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//
#pragma once
#ifndef DeckOfCards_hpp
#define DeckOfCards_hpp

#include "vector"
#include "Card.hpp"

#endif /* DeckOfCards_hpp */

class DeckOfCards
{
public:
    std::vector<Card> deck;
    int currentCard;
    std::vector<Card> shuffleDeck(std::vector<Card> deck);
    Card dealCard(int currentCard, std::vector<Card> deck);
    bool moreCards(int currentCard, std::vector<Card> deck);
    DeckOfCards();
    ~DeckOfCards();
    
};
