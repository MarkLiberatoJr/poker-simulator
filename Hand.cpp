//
//  Hand.cpp
//  3
//
//  Created by Mark Liberato on 4/11/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//

#include "Hand.hpp"
#include "DeckOfCards.hpp"
#include "Card.hpp"
#include "vector"
#include "iostream"

Hand::Hand(){
    DeckOfCards newDeck;
    newDeck.deck = newDeck.shuffleDeck(newDeck.deck);
    for(int i = 0; i < 5; i++){
        int currentCard = i;
        hand.push_back(newDeck.dealCard(currentCard, newDeck.deck));
    }
}

Hand::~Hand(){
    
}

std::vector<Card> Hand::getHand(){
    return hand;
}

int Hand::determineHand(std::vector<Card> hand){
    int pair = 0;
    int threeOfAKind = 0;
    int fourOfAKind = 0;
    int flush = 0;
    int straight = 0;
    int handValue = 0;
    
    if(hand[1].getFace() == hand[0].getFace() + 1 && hand[2].getFace() == hand[1].getFace() + 1 && hand[3].getFace() == hand[2].getFace() + 1 && hand[4].getFace() == hand[3].getFace() + 1 && hand[5].getFace() == hand[4].getFace() + 1){
        straight++;
    }
    
    if (hand[0].getSuit() == hand[1].getSuit() && hand[0].getSuit() == hand[2].getSuit() && hand[0].getSuit() == hand[3].getSuit() && hand[0].getSuit() == hand[4].getSuit() && hand[0].getSuit()==hand[5].getSuit()){
        flush++;
    }
    
    for (int j = 0; j <hand.size() - 1; j++){
        for (int i = j+1; i < hand.size(); i ++){
            for(int k = i + 1; k < hand.size(); k++){
                for(int l = k + 1; l < hand.size(); l++){
                    int faceOne = hand[j].getFace();
                    int faceTwo = hand[i].getFace();
                    int faceThree = hand[k].getFace();
                    int faceFour = hand[l].getFace();
                    
                    if (faceOne == faceTwo && faceOne == faceThree && faceOne == faceFour){
                        fourOfAKind++;
                    }
                }
            }
        }
    }
    
    for (int j = 0; j <hand.size() - 1; j++){
        for (int i = j+1; i < hand.size(); i ++){
            for(int k = i + 1; k < hand.size(); k++){
                int faceOne = hand[j].getFace();
                int faceTwo = hand[i].getFace();
                int faceThree = hand[k].getFace();
                
                if (faceOne == faceTwo && faceOne == faceThree){
                    threeOfAKind++;
                }
                
            }
        }
    }
    
    for (int j = 0; j <hand.size() - 1; j++){
        for (int i = j+1; i < hand.size(); i ++){
            int faceOne = hand[j].getFace();
            int faceTwo = hand[i].getFace();
            
            if (faceOne == faceTwo){
                pair++;
            }
        }
    }
    
    if (straight == 1){
        std::cout << "(A Straight)" << std::endl;
        handValue = 6;
    }
    
    else if (flush == 1){
        std::cout << "(A Flush)" << std::endl;
        handValue = 5;
    }
    
    else if (fourOfAKind == 1){
        std::cout << "(Four of a kind)" << std::endl;
        handValue = 4;
    }
    
    else if (threeOfAKind == 1){
        std::cout << "(Three of a kind)" << std::endl;
        handValue = 3;
    }
    
    else if (pair == 2){
        std::cout << "(Two Pairs)" << std::endl;
        handValue = 2;
    }
    
    else if (pair == 1){
        std::cout << "(A Pair)" << std::endl;
        handValue = 1;
    }
    
    else{
        std::cout << "(Nothing)" << std::endl;
        handValue = 0;
    }
    
    return handValue;
}

void Hand::compareHands(int yourHand, int dealerHand){
    if (yourHand > dealerHand){
        std::cout << "Your hand is Better." << std::endl;
    }
    else if (dealerHand > yourHand){
        std::cout << "Dealer's hand is better." << std::endl;
    }
    else{
        std::cout << "Hands are even." << std::endl;
    }
}
