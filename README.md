#include<iostream>  
using namespace std;

int main()
{
    int x = 0;
宣告 x=0。
    cin >> x;
將輸入值放入x。
    switch (x / 3) 
設置迴圈取商數 
    {
    case 1:cout << "Spring" << endl; break;
如果商數為1 =春，輸出為Spring。
    case 2:cout << "Summer" << endl; break;
如果商數為2 =夏，輸出為Summer。
    case 3:cout << "Autumn" << endl; break;
如果商數為3 =秋，輸出為Autumn。
    default:cout << "Winter" << endl;  
如果商數為4 =冬，輸出為Winter。
    }
    return 0;
}
