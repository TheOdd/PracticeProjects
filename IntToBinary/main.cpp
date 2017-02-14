#include <iostream>
#include <string>

using namespace std;

string selection;
string result;
string remainderString;
int intSelection;
int remainder;

int main()
{
    cout << "Please enter a number." << endl << endl;
    cin >> selection;
    intSelection = stoi(selection);
    while (intSelection != 1)
    {
        remainder = intSelection % 2;
        remainderString = to_string(remainder);
        result.insert(0, remainderString);
        intSelection /= 2;
    }
    remainder = intSelection % 2;
    remainderString = to_string(remainder);
    result.insert(0, remainderString);
    cout << result << endl;
}