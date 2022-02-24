//
//  Card.hpp
//  3
//
//  Created by Mark Liberato on 4/11/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//
#pragma once
#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>
#include "array"
#include "string"

#endif /* Card_hpp */

class Card
{
private:
    int face;
    int suit;
public:
    Card(int cardSuit, int cardFace);
    ~Card();
    void setFace(int cardFace);
    int getFace();
    void setSuit(int cardSuit);
    int getSuit();
    std::string toString(int cardSuit, int cardFace);
};
