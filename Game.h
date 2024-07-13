#pragma once
#include <vector>
#include <map>
#include "Card.h"
#include "Player.h"

class Game{
public:

	Game();
	void GetDeck();
	Card GetCardFromDeck();

private:
	vector<Card> deck;
	
	
};

