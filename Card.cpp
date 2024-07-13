#include "Card.h"
#include <iostream>
#include <io.h>
#include <fcntl.h>

map<Suit, int> Card::suitToInt;
map<Rank, int> Card::rankToInt;
set<Rank> Card::rankSet;
set<Suit> Card::suitSet;
// 获取花色
Suit Card::GetSuit() const {
    return suit;
}

// 获取点数
Rank Card::GetRank() const {
    return rank;
}

// 获取花色字符串
const wchar_t* Card::GetSuitString() const {
    switch (suit) {
    case HEARTS:   return L"\u2665";
    case DIAMONDS: return L"\u2666 ";
    case CLUBS:    return L"\u2663";
    case SPADES:   return L"\u2660";
    case BIG:      return L"大";
    case LITTLE:   return L"小";
    default:       return L"？";
    }
}

// 获取点数字符串
const wchar_t* Card::GetRankString() const {
    switch (rank) {
    case ACE:   return L"A ";
    case TWO:   return L"2 ";
    case THREE: return L"3 ";
    case FOUR:  return L"4 ";
    case FIVE:  return L"5 ";
    case SIX:   return L"6 ";
    case SEVEN: return L"7 ";
    case EIGHT: return L"8 ";
    case NINE:  return L"9 ";
    case TEN:   return L"10";
    case JACK:  return L"J ";
    case QUEEN: return L"Q ";
    case KING:  return L"K ";
    case JOKER:  return L"王";
    default:    return L"?";
    }
}

// 打印卡片信息
void Card::PrintCard() const {
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << GetSuitString() << ""<< GetRankString()<<" ";
}

void Card::InitMap()
{
    suitToInt.emplace(HEARTS, 1);
    suitToInt.emplace(DIAMONDS, 2);
    suitToInt.emplace(CLUBS, 3);
    suitToInt.emplace(SPADES, 4);
    suitToInt.emplace(LITTLE, 1);
    suitToInt.emplace(BIG, 2);
    suitSet.insert(HEARTS);
    suitSet.insert(DIAMONDS);
    suitSet.insert(CLUBS);
    suitSet.insert(SPADES);

    rankToInt.emplace(THREE, 3);
    rankToInt.emplace(FOUR, 4);
    rankToInt.emplace(FIVE, 5);
    rankToInt.emplace(SIX, 6);
    rankToInt.emplace(SEVEN, 7);
    rankToInt.emplace(EIGHT, 8);
    rankToInt.emplace(NINE, 9);
    rankToInt.emplace(TEN, 10);
    rankToInt.emplace(JACK, 11);
    rankToInt.emplace(QUEEN, 12);
    rankToInt.emplace(KING, 13);
    rankToInt.emplace(ACE, 14);
    rankToInt.emplace(TWO, 15);
    rankToInt.emplace(JOKER, 16);
    rankSet.insert(THREE);
    rankSet.insert(FOUR);
    rankSet.insert(FIVE);
    rankSet.insert(SIX);
    rankSet.insert(SEVEN);
    rankSet.insert(EIGHT);
    rankSet.insert(NINE);
    rankSet.insert(TEN);
    rankSet.insert(JACK);
    rankSet.insert(QUEEN);
    rankSet.insert(KING);
    rankSet.insert(ACE);
    rankSet.insert(TWO);
}
