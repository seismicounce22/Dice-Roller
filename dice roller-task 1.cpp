
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Dice {
private:
    int die1;
    int die2;

public:
    Dice() {
        // Seed random generator once
        srand(time(0));
    }

    void roll() {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
    }

    void display() {
        cout << "First Die  : " << die1 << endl;
        cout << "Second Die : " << die2 << endl;
        cout << "Total      : " << die1 + die2 << endl;
    }
};

int main() {
    Dice game;
    char choice;

    do {
        game.roll();
        game.display();

        cout << endl;
        cout << "Roll again? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "Game Over. Thanks for playing!" << endl;

    return 0;
}

