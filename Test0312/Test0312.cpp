#include<iostream>
using namespace std;

int main() {
    int x = 0;
    int nb[8];
    cin >> x;
    if (x < 0)
    {
        x += 256;      
    }
    for (int i = 7; i >= 0; i--)
    {
        nb[i] = x % 2;
        x /= 2;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << nb[i];
    }
    cout << "\n";
}