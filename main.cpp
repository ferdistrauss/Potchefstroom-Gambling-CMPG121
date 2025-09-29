#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayMenu();
void displayBJ();
void playBJ();

struct Player
{
    string username;
    double balance = 200.00; //starting balance for new players is R200
    string ID;
};

int main()
{
    Player player;
    int choice = 0;
    do
    {
        displayMenu();
        cout << "Option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Current Balance: R" << fixed << setprecision(2) << player.balance << endl;
            cout << endl;
            break;
        case 2:
            system("cls");
            displayBJ();
            break;

        }
    }while (choice != 5);
}

void displayMenu()
{
    cout << "==============================================" << endl;
    cout << " $       POTCHEFSTROOM VIRTUAL CASINO       $" << endl;
    cout << "==============================================" << endl;
    cout << "1. Balance"
            "\n2. Play Black Jack"
            "\n3. Play Coinflip"
            "\n4. Play Slots"
            "\n5. Exit" << endl;
}

void displayBJ()
{
    int choice;
    do
    {
        cout << "==============================================" << endl;
        cout << " $               BLACK JACK                 $" << endl;
        cout << "==============================================" << endl;
        cout << "1. Play"
                "\n2. Help"
                "\n3. Return" << endl;
        cout << "Option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            playBJ();
            break;
        case 2:
            system("cls");
            cout << "How it works:"
                    "\nBlackjack is a popular card game where the goal is to beat the dealer by having a hand value closer to 21 without going over."
                    "\nEach player gets two cards, and the dealer also gets two (one face up, one face down)."
                    "\n\nNumber cards are worth their face value, face cards (J, Q, K) are worth 10, and aces can be worth 1 or 11."
                    "\nPlayers can 'hit' (take another card) or 'stand' (keep their current hand). If a player’s hand goes over 21, they “bust” and lose." << endl;
            cout << endl;
            break;
        case 3:
            system("cls");
            break;
        }
    }while (choice != 3);
}

void playBJ()
{
    const int MAX = 5;
    const string deck[52] =
    {
        "A♠","2♠","3♠","4♠","5♠","6♠","7♠","8♠","9♠","10♠","J","Q","K",
        "A♥","2♥","3♥","4♥","5♥","6♥","7♥","8♥","9♥","10♥","J","Q","K",
        "A♣","2♣","3♣","4♣","5♣","6♣","7♣","8♣","9♣","10♣","J","Q","K",
        "A♦","2♦","3♦","4♦","5♦","6♦","7♦","8♦","9♦","10♦","J","Q","K"
    };
    int dealerdeck[MAX];
    int playerdeck[MAX];
}
