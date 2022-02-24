//
//  main.cpp
//  3
//
//  Created by Mark Liberato on 4/11/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//

#include <iostream>
#include "array"
#include "vector"
#include "Card.hpp"
#include "DeckOfCards.hpp"
#include "ctime"
#include "cstdlib"
#include "Hand.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    std::srand(static_cast<unsigned int>(time(0)));
    
    Hand newHand;
    
    cout << "Your hand is: " << endl;
    
    for (int i = 0; i < newHand.getHand().size(); i++){
        Card newCard(0,0);
        vector<Card> myHand = newHand.getHand();
        int newCardSuit = myHand[i].getSuit();
        int newCardFace = myHand[i].getFace();
        
        cout << newCard.toString(newCardSuit, newCardFace) << endl;
    }
    
    int yourHandValue = newHand.determineHand(newHand.getHand());
    
    Hand dealerHand;
    cout << "The dealer's hand is: " << endl;
    
    for (int i = 0; i < dealerHand.getHand().size(); i++){
        Card newCard(0,0);
        vector<Card> dealersHand = dealerHand.getHand();
        int newCardSuit = dealersHand[i].getSuit();
        int newCardFace = dealersHand[i].getFace();
        
        cout << newCard.toString(newCardSuit, newCardFace) << endl;
    }
    
    int dealerHandValue = dealerHand.determineHand(dealerHand.getHand());
    
    newHand.compareHands(yourHandValue, dealerHandValue);
    
    return 0;
}
