#include <iostream>
#include <iomanip>
#include <utility>
#include <algorithm>
using namespace std;

// int mySwap(int *a, int *b)
// {
//     int t = *b;
//     *b = *a;
//     *a = t;
// }

int main()
{
    int a, b;
    cin >> a >> b;
    // int swapping = mySwap(&a, &b);
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}