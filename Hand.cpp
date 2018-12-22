#include <vector>
#include <stdexcept>
#include "Hand.h"
#include "Constants.h"

Hand::Hand(Card c1, Card c2, bool _isNatural = true) : isNatural(_isNatural) {
    h.push_back(c1);
    h.push_back(c2);

    int sum = c1 + c2;
    if(std::find(h.begin(), h.end(), C1) == h.end()) { // no Ace
        if (sum == 4) val = H4;
        else if (sum == 5) val = H5;
        else if (sum == 6) val = H6;
        else if (sum == 7) val = H7;
        else if (sum == 8) val = H8;
        else if (sum == 9) val = H9;
        else if (sum == 10) val = H10;
        else if (sum == 11) val = H11;
        else if (sum == 12) val = H12;
        else if (sum == 13) val = H13;
        else if (sum == 14) val = H14;
        else if (sum == 15) val = H15;
        else if (sum == 16) val = H16;
        else if (sum == 17) val = H17;
        else if (sum == 18) val = H18;
        else if (sum == 19) val = H19;
        else if (sum == 20) val = H20;
        else throw std::runtime_error("ERROR: Hand::Hand() has Ace, don't know what to do.");
    } else {
        if (sum == 2) val = S12;
        else if (sum == 3) val = S13;
        else if (sum == 4) val = S14;
        else if (sum == 5) val = S15;
        else if (sum == 6) val = S16;
        else if (sum == 7) val = S17;
        else if (sum == 8) val = S18;
        else if (sum == 9) val = S19;
        else if (sum == 10) val = S20;
        else if (sum == 11) val = BJ;
        else throw std::runtime_error("ERROR: Hand::Hand() no Ace, don't know what to do.");
    }
}

bool Hand::is_pair() {
    return is_first_two() && (h.front() == h.back());
}

bool Hand::is_first_two() {
    return h.size() == 2;
}

bool Hand::is_natural() {
    return isNatural;
}

Hand_val Hand::get_score() {
    return val;
}

Hand_val Hand::draw(Card c) {
    val = transition(val, c);
    return val;
}

Card Hand::split() {
    if (h.size() != 2)
        throw std::runtime_error("ERROR: Cannot split hand it does not have exactly 2 cards.");

    if (h.front() != h.back())
        throw std::runtime_error("ERROR: Cannot split hand because it is not a pair.");

    isNatural = false;
    Card c = h.front();
    h.pop_back();
    return c;
}

Hand_val Hand::transition(Hand_val h, Card c) {
    if (h == H4) {
        if (c == C1) return S15;
        else if (c == C2) return H6;
        else if (c == C3) return H7;
        else if (c == C4) return H8;
        else if (c == C5) return H9;
        else if (c == C6) return H10;
        else if (c == C7) return H11;
        else if (c == C8) return H12;
        else if (c == C9) return H13;
        else if (c == C10) return H14;
    } else if (h == H5) {
        if (c == C1) return S16;
        else if (c == C2) return H7;
        else if (c == C3) return H8;
        else if (c == C4) return H9;
        else if (c == C5) return H10;
        else if (c == C6) return H11;
        else if (c == C7) return H12;
        else if (c == C8) return H13;
        else if (c == C9) return H14;
        else if (c == C10) return H15;
    } else if (h == H6) {
        if (c == C1) return S17;
        else if (c == C2) return H8;
        else if (c == C3) return H9;
        else if (c == C4) return H10;
        else if (c == C5) return H11;
        else if (c == C6) return H12;
        else if (c == C7) return H13;
        else if (c == C8) return H14;
        else if (c == C9) return H15;
        else if (c == C10) return H16;
    } else if (h == H7) {
        if (c == C1) return H18;
        else if (c == C2) return H9;
        else if (c == C3) return H10;
        else if (c == C4) return H11;
        else if (c == C5) return H12;
        else if (c == C6) return H13;
        else if (c == C7) return H14;
        else if (c == C8) return H15;
        else if (c == C9) return H16;
        else if (c == C10) return H17;
    } else if (h == H8) {
        if (c == C1) return H19;
        else if (c == C2) return H10;
        else if (c == C3) return H11;
        else if (c == C4) return H12;
        else if (c == C5) return H13;
        else if (c == C6) return H14;
        else if (c == C7) return H15;
        else if (c == C8) return H16;
        else if (c == C9) return H17;
        else if (c == C10) return H18;
    } else if (h == H9) {
        if (c == C1) return H20;
        else if (c == C2) return H11;
        else if (c == C3) return H12;
        else if (c == C4) return H13;
        else if (c == C5) return H14;
        else if (c == C6) return H15;
        else if (c == C7) return H16;
        else if (c == C8) return H17;
        else if (c == C9) return H18;
        else if (c == C10) return H19;
    } else if (h == H10) {
        if (c == C1) return H21;
        else if (c == C2) return H12;
        else if (c == C3) return H13;
        else if (c == C4) return H14;
        else if (c == C5) return H15;
        else if (c == C6) return H16;
        else if (c == C7) return H17;
        else if (c == C8) return H18;
        else if (c == C9) return H19;
        else if (c == C10) return H20;
    } else if (h == H11) {
        if (c == C1) return H12;
        else if (c == C2) return H13;
        else if (c == C3) return H14;
        else if (c == C4) return H15;
        else if (c == C5) return H16;
        else if (c == C6) return H17;
        else if (c == C7) return H18;
        else if (c == C8) return H19;
        else if (c == C9) return H20;
        else if (c == C10) return H21;
    } else if (h == H12) {
        if (c == C1) return H13;
        else if (c == C2) return H14;
        else if (c == C3) return H15;
        else if (c == C4) return H16;
        else if (c == C5) return H17;
        else if (c == C6) return H18;
        else if (c == C7) return H19;
        else if (c == C8) return H20;
        else if (c == C9) return H21;
        else if (c == C10) return BUST;
    } else if (h == H13) {
        if (c == C1) return H14;
        else if (c == C2) return H15;
        else if (c == C3) return H16;
        else if (c == C4) return H17;
        else if (c == C5) return H18;
        else if (c == C6) return H19;
        else if (c == C7) return H20;
        else if (c == C8) return H21;
        else if (c == C9) return BUST;
        else if (c == C10) return BUST;
    } else if (h == H14) {
        if (c == C1) return H15;
        else if (c == C2) return H16;
        else if (c == C3) return H17;
        else if (c == C4) return H18;
        else if (c == C5) return H19;
        else if (c == C6) return H20;
        else if (c == C7) return H21;
        else if (c == C8) return BUST;
        else if (c == C9) return BUST;
        else if (c == C10) return BUST;
    } else if (h == H15) {
        if (c == C1) return H16;
        else if (c == C2) return H17;
        else if (c == C3) return H18;
        else if (c == C4) return H19;
        else if (c == C5) return H20;
        else if (c == C6) return H21;
        else if (c == C7) return BUST;
        else if (c == C8) return BUST;
        else if (c == C9) return BUST;
        else if (c == C10) return BUST;
    } else if (h == H16) {
        if (c == C1) return H17;
        else if (c == C2) return H18;
        else if (c == C3) return H19;
        else if (c == C4) return H20;
        else if (c == C5) return H21;
        else if (c == C6) return BUST;
        else if (c == C7) return BUST;
        else if (c == C8) return BUST;
        else if (c == C9) return BUST;
        else if (c == C10) return BUST;
    // } else if (h == H17) {

    // } else if (h == H18) {

    // } else if (h == H19) {

    // } else if (h == H20) {

    // } else if (h == H21) {

    } else if (h == S12) {
        if (c == C1) return S13;
        else if (c == C2) return S14;
        else if (c == C3) return S15;
        else if (c == C4) return S16;
        else if (c == C5) return S17;
        else if (c == C6) return H18;
        else if (c == C7) return H19;
        else if (c == C8) return H20;
        else if (c == C9) return H21;
        else if (c == C10) return H12;
    } else if (h == S13) {
        if (c == C1) return S14;
        else if (c == C2) return S15;
        else if (c == C3) return S16;
        else if (c == C4) return S17;
        else if (c == C5) return H18;
        else if (c == C6) return H19;
        else if (c == C7) return H20;
        else if (c == C8) return H21;
        else if (c == C9) return H12;
        else if (c == C10) return H13;
    } else if (h == S14) {
        if (c == C1) return S15;
        else if (c == C2) return S16;
        else if (c == C3) return S17;
        else if (c == C4) return H18;
        else if (c == C5) return H19;
        else if (c == C6) return H20;
        else if (c == C7) return H21;
        else if (c == C8) return H12;
        else if (c == C9) return H13;
        else if (c == C10) return H14;
    } else if (h == S15) {
        if (c == C1) return S16;
        else if (c == C2) return S17;
        else if (c == C3) return H18;
        else if (c == C4) return H19;
        else if (c == C5) return H20;
        else if (c == C6) return H21;
        else if (c == C7) return H12;
        else if (c == C8) return H13;
        else if (c == C9) return H14;
        else if (c == C10) return H15;
    } else if (h == S16) {
        if (c == C1) return S17;
        else if (c == C2) return H18;
        else if (c == C3) return H19;
        else if (c == C4) return H20;
        else if (c == C5) return H21;
        else if (c == C6) return H12;
        else if (c == C7) return H13;
        else if (c == C8) return H14;
        else if (c == C9) return H15;
        else if (c == C10) return H16;
    } else if (h == S17) {
        if (c == C1) return H18;
        else if (c == C2) return H19; 
        else if (c == C3) return H20;
        else if (c == C4) return H21;
        else if (c == C5) return H12;
        else if (c == C6) return H13;
        else if (c == C7) return H14;
        else if (c == C8) return H15;
        else if (c == C9) return H16;
        else if (c == C10) return H17;
    } else if (h == BUST) {
        throw std::runtime_error("ERROR: Dealer trying to hit on a busted hand.");
    } else {
        throw std::runtime_error("ERROR: hand::transition_dealer() does not know what to do.");
    }

    return ERF_HAND;
}

Card Hand::hole_card() {
    return h.back();
}
