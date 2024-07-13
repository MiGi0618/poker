#include "Player.h"
#include<iostream>

Player::Player()
{

}

void Player::ShowHand()
{
	for (const auto& card : handCards) {
		card.PrintCard();
	}
	wcout << endl;
}

void Player::GetCard(Card card)
{
	handCards.insert(card);
}
