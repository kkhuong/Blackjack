#ifndef GAME_H
#define GAME_H

#include "Hand.h"
#include "Shoe.h"
#include <vector>

class Game {
 private:
    Shoe                                        shoe;
    int                                         running_count;

    std::vector<Hand>                           player_hands;
    Hand                                        dealer_hand;
    long double                                 bankroll;

    const int                                   decks;
    const long double                           pen;
    const long double                           initial_bankroll;

    std::vector<std::tuple<int, int, double>>   spread_table; // TC, Hands, Bet


 public:
    Game(int _decks, long double _pen, long double _bankroll,
         RDouble rule_D, RSplit rule_S, RDoubleAfterSplit rule_DAS, RSplitAce rule_SA,
         R17 rule_17, RLateSurrender rule_LS = LS, RInsurance rule_I = I,
         RBJPayout rule_payout = P3_2);

    virtual void runRound(int hand_spread);
    virtual void playerRun(int hand_number);
    void dealerRun();
};

#endif  // GAME_H
