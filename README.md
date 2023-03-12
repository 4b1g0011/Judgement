#include <iostream>  
using namespace std;

int main()
{
    int hore1, min1, hore2, min2;
    設置四個整數型態，分別為開始小時、分鐘跟結束小時、分鐘。
    cin >> hore1;
    cin >> min1;//開始時間  
    cin >> hore2;
    cin >> min2;//結束時間  

    int time = (hore2 * 60 + min2) - (hore1 * 60 + min1); 
    將結束、開始小時加上60，在上個別的分鐘數，結束減開始，得到總時數。
    if (time <= 120 && time >= 0) {
        cout << time / 30 * 30 << endl; 
    }
    判斷是否總時數為0~120，如果是就計算出兩小時內的費用。
    else if (time > 120 && time <= 240) {
        cout << (time - 120) / 30 * 40 + 120 << endl; 
    }
    判斷是否總時數為121~240，如果是就計算出四小時+兩小時的費用。
    else {
        cout << (time - 240) / 30 * 60 + 120 + 160 << endl; 
    }
    判斷是否總時數為240以外的時數，如果是就計算出4小時外的費用+4小時的費用+2小時的費用。
    return 0;
}
