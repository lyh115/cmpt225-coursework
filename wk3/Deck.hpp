#ifndef _DECK_HPP_
#define _DECK_HPP_

enum Suit { Spades, Hearts, Clubs, Diamonds };

struct Card {
  Suit theSuit;
  char theValue;
};
class Deck {
private:
  int size;   // number of cards in this deck
  Card *deck; // for the dynamic array with the correct size
public:
  Deck();
  ~Deck();
  void printDeck();
  void shuffleDeck();
  Card getCard(int index); // returns a copy of the card
};
#endif
