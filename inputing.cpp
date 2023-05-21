#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    float x;
    cin >> a >> b >> x;
    cout << "Out A: " << a << " Out B: " << b << " X: " << fixed << setprecision(2) << x << endl;
    return 0;
}