#include<iostream>  
using namespace std;

int main()
{
    int x, y;
    while (cin >> x >> y) {
        int Test_radius = 10000;
        double new_radius = (x * x) + (y * y); 
        if (new_radius < Test_radius) {
            cout << "inside\n";
        }
        else {
            cout << "outside\n";
        }
    }
    return 0;
}