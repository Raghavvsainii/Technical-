#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int user, computer;

    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissor" << endl;

    cout << "Enter your choice: ";
    cin >> user;

    computer = rand() % 3 + 1;

    cout << "Your choice: " << user << endl;
    cout << "Computer choice: " << computer << endl;

    if (user == computer)
    {
        cout << "Draw";
    }
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
    {
        cout << "You Win";
    }
    else
    {
        cout << "Computer Wins";
    }

    return 0;
}
