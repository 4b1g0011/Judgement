#include<iostream>  
#include <iomanip>  
using namespace std;

int main()
{
    int x;
    while (cin >> x) {
        double c = x * 1.6;
        cout << fixed << setprecision(1) << c << "\n";
    }

    return 0;
}