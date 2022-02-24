//
//  Hand.hpp
//  3
//
//  Created by Mark Liberato on 4/11/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//
#pragma once
#ifndef Hand_hpp
#define Hand_hpp

#include <stdio.h>
#include "DeckOfCards.hpp"
#include "Card.hpp"
#include "vector"

#endif /* Hand_hpp */

class Hand
{
private:
    std::vector<Card> hand;
public:
    Hand();
    ~Hand();
    std::vector<Card> getHand();
    int determineHand(std::vector<Card> hand);
    void compareHands(int yourHand, int dealerHand);
};
