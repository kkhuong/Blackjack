#include "Game.h"
#include "Constants.h"
#include <cstdio>

int main() {
    printf("┌Introduction───────────────────────────────────────────┐\n");
    printf("│ Welcome to kkhuong's Monte Carlo Blackjack Simulator. │\n");
    printf("│ Please report all bugs and errors to kkhuong@ucsd.edu │\n");
    printf("│ by including a description of the bug and what you    │\n");
    printf("│ did to cause the bug.                                 │\n");
    printf("│                                                       │\n");
    printf("│ At this time, our program only supports the Hi-Lo     │\n");
    printf("│ Counting System. We are not planning to add support   │\n");
    printf("│ for any other counting system soon. However, the      │\n");
    printf("│ source code for this program is provided at           │\n");
    printf("│             https://github.com/kkhuong                │\n");
    printf("│ so you can modify this program for your own needs.    │\n");
    printf("│                                                       │\n");
    printf("│ Without further ado, please configure the Blackjack   │\n");
    printf("│ game you wish to simulate below...                    │\n");
    printf("│                                           -kkhuong    │\n");
    printf("└───────────────────────────────────────────────────────┘\n\n");

    printf("┌Configuration──┬───────┬───────────┬──────────────────────┐\n");
    printf("│ PEN           │ Decks │ Splitting │ Doubling After Split │\n");
    printf("├───────────────┼───────┼───────────┼──────────────────────┤\n");
    printf("│ 0.0 - 1.0     │ 2-8   │ 1. RS4    │ 1. DAS               │\n");
    printf("│ endpoint      │       │ 2. SP3    │ 2. NDAS              │\n");
    printf("│ exclusive     │       │ 3. SP2    │                      │\n");
    printf("├───────────────┴─┬─────┴───────────┴─┬────────────────────┤\n");
    printf("│ Resplitting Ace │ Natural BJ Payout │ Insurance          │\n");
    printf("├─────────────────┼───────────────────┼────────────────────┤\n");
    printf("│ 1. RSA          │ 1. 3:2            │ 1. Offered         │\n");
    printf("│ 2. NSA          │ 2. 6:5            │ 2. Not Offered     │\n");
    printf("│                 │ 3. 1:1            │                    │\n");
    printf("├─────────────────┼───────────────┬───┴────────────────────┤\n");
    printf("│ Late Surrender  │ Doubling      │                        │\n");
    printf("├─────────────────┼───────────────┤                        │\n");
    printf("│ 1. Offered      │ 1. Any 2 card │                        │\n");
    printf("│ 2. Not Offered  │ 2. D9-11      │                        │\n");
    printf("│                 │ 3. D8-11      │                        │\n");
    printf("└─────────────────┴───────────────┴────────────────────────┘\n\n");


    double pen;
    int decks;

    printf("PEN> ");
    scanf("%lf", &pen);
    printf("Decks> ");
    scanf("%d", &decks);
}
