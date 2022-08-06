#include <iostream>
#include <vector>

#include "card.h"

int* genDeck()
{
    std::vector<int> defDeck;
    for (int i = 0; i < 52; i++)
    {
        defDeck.push_back(i);
    }
    int* deck = new int[52];
    for (int i = 52; i > 0; i--)
    {
        int index = rand() % i;
        deck[i - 1] = defDeck[index];
        defDeck.erase(defDeck.begin() + index);
    }
    return deck;
};

int main(int, char**) {
    srand(time(0));
    int trials = 100;
    std::cout << "Enter Number of trials: \n";
    std::cin >> trials;

    int* d = genDeck();
    for (int i = 0; i < trials; i++)
    {
        std::cout << d[i] << " ";
    }
    std::cout << std::endl;
}
