#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

// int my_min(int a,int b)
// {
//     if(a<b) return a;
//     else return b;
// }
// int my_max(int a,int b)
// {
//     if(a>b) return a;
//     else return b;
// }

int main()
{
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << " " << max(a, b) << endl;

    return 0;
}