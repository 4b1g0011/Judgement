#include<iostream>  
using namespace std;

int main()
{
    int x = 0;

    cin >> x;
    switch (x / 3)  
    {
    case 1:cout << "Spring" << endl; break;
    case 2:cout << "Summer" << endl; break;
    case 3:cout << "Autumn" << endl; break;
    default:cout << "Winter" << endl;  
    }
    return 0;
}