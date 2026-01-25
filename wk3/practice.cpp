// Yihang Li ID:301606640
#include "Deck.hpp"
#include <iostream> //for the operator<<
using namespace std;
ostream &operator<<(ostream &os, const Card &card) {
  os << card.theValue;
  switch (card.theSuit) {
  case Spades:
    os << "\u2660";
    break;
  case Hearts:
    os << "\u2665";
    break;
  case Clubs:
    os << "\u2663";
    break;
  default:
    os << "\u2666";
  }
  return os; // need this at the end
}
// Implementations of the Deck methods

Deck::Deck() {
  size = 52;
  deck = new Card[size];
  char values[] = {'A', 'K', 'Q', 'J', 'T', '9', '8',
                   '7', '6', '5', '4', '3', '2'};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      deck[i * 13 + j].theSuit = (Suit)i;
      deck[i * 13 + j].theValue = values[j];
    }
  }
}

Deck::~Deck() { delete[] this->deck; }

void Deck::printDeck() {
  int count = 0;
  while (count < size) {
    cout << deck[count] << " ";
    count++;
    if (count % 13 == 0) {
      cout << endl;
    }
  }
}

void Deck::shuffleDeck() {
  srand(time(NULL));
  for (int i = size - 1; i > 0; i--) {
    int r = rand() % (i + 1);
    Suit temp1 = deck[i].theSuit;
    char temp2 = deck[i].theValue;
    deck[i].theSuit = deck[r].theSuit;
    deck[i].theValue = deck[r].theValue;
    deck[r].theSuit = temp1;
    deck[r].theValue = temp2;
  }
}

int main() {
  while (true) {
    Deck result;
    char user_input;
    cout << "p: display all the cards in their curent order" << endl;
    cout << "s: reorder all the cards in a new random order" << endl;
    cout << "q: exit the program" << endl;

    cin >> user_input;
    if (user_input == 'p') {

      result.printDeck();
      cout << "deck printed" << endl;
    }
    if (user_input == 's') {
      result.shuffleDeck();
      result.printDeck();
      cout << "deck shuffled" << endl;
    }
    if (user_input == 'q') {
      return 0;
    }
  }
}
