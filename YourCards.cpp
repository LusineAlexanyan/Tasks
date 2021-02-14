#include <iostream>
using namespace std;
enum YourCards
{
    Ace = 43,
    Jack,
    Queen,
    King
};
int main()
{
    cout << "Displaying cards and their symbolic values" << endl;
    cout << "Ace: " << Ace << endl;
    cout << "Jack: " << Jack << endl;
    cout << "Queen: " << Queen << endl;
    cout << "King: " << King << endl;

    return 0;
}
