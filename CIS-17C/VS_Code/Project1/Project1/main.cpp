//Lab 2
//Abdul Abbas
//Act as the test harness

#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>

#include "card.h"
#include "deck.h"

int main()
{
	srand(time(NULL));

	Deck _deck;
	_deck.print_Deck();
	_deck.getOneCard();

	std::cout << std::endl;
	_deck.print_Deck();


	std::cout << std::endl;

	return 0;
}