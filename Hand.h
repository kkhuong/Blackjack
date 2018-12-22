#ifndef HAND_H
#define HAND_H


#include <vector>
#include "Constants.h"

class Hand {
 private:
    std::vector<Card> h;
    Hand_val val;
    bool isNatural;
    static Hand_val transition(Hand_val h, Card c);

 public:
    Hand(Card c1, Card c2, bool _isNatural);
    Hand_val draw(Card c);
    Hand_val get_score();

    // Player specific functions
    bool is_pair();
    bool is_first_two();
    bool is_natural();
    Card split();

    // Dealer specific functions
    Card hole_card();
};

#endif  // HAND_H
