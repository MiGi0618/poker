#pragma once

#include <string>
#include <map>
#include <set>

using namespace std;

enum Suit {
    HEARTS = 1,
    DIAMONDS,
    CLUBS,
    SPADES,
    LITTLE,
    BIG
};

// 枚举表示点数
enum Rank {
    THREE = 1,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,
    TWO,
    JOKER
};

class Card {
public:
    // 枚举表示花色
    

    // 构造函数
    Card(Suit suit, Rank rank) : suit(suit), rank(rank) {}

    bool operator<(const Card& otherCard) const {
        if (rank == otherCard.rank) {
            return suit < otherCard.suit;
        }
        return rank < otherCard.rank;
    }

    // 获取花色
    Suit GetSuit() const;

    // 获取点数
    Rank GetRank() const;

    // 获取花色字符串
    const wchar_t* GetSuitString() const;

    // 获取点数字符串
    const wchar_t* GetRankString() const;

    // 打印卡片信息
    void PrintCard() const;

    static void InitMap();

    Suit suit;
    Rank rank;
    static map<Suit, int> suitToInt;
    static map<Rank, int> rankToInt;
    static set<Rank> rankSet;
    static set<Suit> suitSet;
};
