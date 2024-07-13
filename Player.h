#pragma once

#include <set>
#include "Card.h"

class Player
{
public:
	Player();
	void ShowHand();
	void GetCard(Card card);

private:
	set<Card> handCards;
};

