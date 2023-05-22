#include <iostream>
#include <iomanip>
#include <utility>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);
    cout << strlen(s) << " " << s << endl;
    return 0;
}