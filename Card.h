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

// ö�ٱ�ʾ����
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
    // ö�ٱ�ʾ��ɫ
    

    // ���캯��
    Card(Suit suit, Rank rank) : suit(suit), rank(rank) {}

    bool operator<(const Card& otherCard) const {
        if (rank == otherCard.rank) {
            return suit < otherCard.suit;
        }
        return rank < otherCard.rank;
    }

    // ��ȡ��ɫ
    Suit GetSuit() const;

    // ��ȡ����
    Rank GetRank() const;

    // ��ȡ��ɫ�ַ���
    const wchar_t* GetSuitString() const;

    // ��ȡ�����ַ���
    const wchar_t* GetRankString() const;

    // ��ӡ��Ƭ��Ϣ
    void PrintCard() const;

    static void InitMap();

    Suit suit;
    Rank rank;
    static map<Suit, int> suitToInt;
    static map<Rank, int> rankToInt;
    static set<Rank> rankSet;
    static set<Suit> suitSet;
};
