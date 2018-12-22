#include <vector>
#include <algorithm>
#include <cstdlib>
#include <random>
#include <chrono>
#include <thread>
#include "Constants.h"
#include "Shoe.h"

Shoe::Shoe(int _decks) {
    for (int i = 0; i < _decks; ++i)
        std::copy(standard_deck.cbegin(), standard_deck.cend(), std::back_inserter(cards));

    cards.shrink_to_fit();
    shuffle();
}

void Shoe::shuffle() {
    std::chrono::seconds dura(1);
    std::this_thread::sleep_for(dura);
    srand(time(0));
    std::random_shuffle(cards.begin(), cards.end());
}

Card Shoe::draw_card() {
    Card c = cards.back();
    cards.pop_back();
    return c;
}

void Shoe::burn_card() {
    cards.pop_back();
}

double Shoe::decks_remaining() {
    return cards.size() / 52.0;
}
