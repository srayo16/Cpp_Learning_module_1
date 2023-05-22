#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char a;
    cin >> a;
    char c = tolower(a);
    switch (c)
    {

    case 'a':
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Constant" << endl;
    }

    return 0;
}