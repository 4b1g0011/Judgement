#include <iostream>  
using namespace std;

int main()
{
    int hore1, min1, hore2, min2;

    cin >> hore1;
    cin >> min1;//開始時間  
    cin >> hore2;
    cin >> min2;//結束時間  

    int time = (hore2 * 60 + min2) - (hore1 * 60 + min1);//計算總時數   
    if (time <= 120 && time >= 0) {
        cout << time / 30 * 30 << endl; 
    }
    else if (time > 120 && time <= 240) {
        cout << (time - 120) / 30 * 40 + 120 << endl; 
    }
    else {
        cout << (time - 240) / 30 * 60 + 120 + 160 << endl; 
    }
    return 0;
}