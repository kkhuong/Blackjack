#ifndef CONSTANTS_H
#define CONSTANTS_H

enum R17               { Hit17, Stand17 };
enum RDouble           { D9_11, DA2 }; // usually DA2 or D9_11
enum RSplit            { SP2, SP3, RS4 };  // usually RS4
enum RDoubleAfterSplit { DAS, NDAS };
enum RSplitAce         { RSA, NSA };
enum RBJPayout         { P3_2, P6_5, P1_1 }; // often unused... or just say P3_2
enum RLateSurrender    { LS, NSR };
enum RInsurance        { I, NI };    // often unused... or just say I

enum Hand_val          { H4, H5, H6, H7, H8, H9, H10, H11, H12, H13, H14, H15,
                         H16, H17, H18, H19, H20, H21,
                         S12, S13, S14, S15, S16, S17, S18, S19, S20,
                         BUST, BUST22, BUST23, BUST24, BUST25, BUST26, BUST27,
                         BUST28, BUST29,
                         BJ, ERF_HAND };

typedef int Card;
const Card C1 = 1;
const Card C2 = 2;
const Card C3 = 3;
const Card C4 = 4;
const Card C5 = 5;
const Card C6 = 6;
const Card C7 = 7;
const Card C8 = 8;
const Card C9 = 9;
const Card C10 = 10;

#endif  // CONSTANTS_H
