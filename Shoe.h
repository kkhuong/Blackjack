#ifndef SHOE_H
#define SHOE_H

#include "Constants.h"
#include <vector>
#include <algorithm>
#include <random>

class Shoe {
 private:
    // static auto rng = std::default_random_engine {};
    const std::vector<Card> standard_deck = { C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C10, C10, C10 };
    std::vector<Card> cards;
    void shuffle();

 public:
    explicit Shoe(int _decks);
    Card draw_card();
    void burn_card();
    double decks_remaining();
};

#endif  // SHOE_H
