#include "Game.h"

#include <iostream>
#include "Utils.h"


using namespace std;

Game::Game()
{
	Card::InitMap();
	GetDeck();
	Player player1;
	Player player2;
	Player player3;
	wcout << L"玩家一的手牌：";
	for (int i = 0; i < 17;i++) {
		player1.GetCard(GetCardFromDeck());
	}
	player1.ShowHand();
	wcout << endl << L"玩家二的手牌：";
	for (int i = 0; i < 17; i++) {
		player2.GetCard(GetCardFromDeck());
	}
	player2.ShowHand();
	wcout << endl << L"玩家三的手牌：";
	for (int i = 0; i < 17; i++) {
		player3.GetCard(GetCardFromDeck());
	}
	player3.ShowHand();
	wcout << endl;
}

void Game::GetDeck()
{
	for (const auto& suit : Card::suitSet) {
		for (const auto& rank : Card::rankSet) {
			deck.emplace_back(suit, rank);
			deck.back().PrintCard();
		}
		wcout << endl;
	}
	deck.emplace_back(BIG,JOKER);
	deck.back().PrintCard();
	deck.emplace_back(LITTLE, JOKER);
	deck.back().PrintCard();
	wcout << endl;
}

Card Game::GetCardFromDeck()
{
	if (deck.empty()) {
		wcout << L"牌发完了" << endl;
	}
	int randomNum = Utils::GetRandomNumber(0, deck.size()-1);
	Card result = deck[randomNum];
	deck.erase(deck.begin()+randomNum);
	return result;
}