#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 16:
        cout << "Correct One!" << endl;
        break;
    default:
        cout << "Nothing" << endl;
    }

    return 0;
}