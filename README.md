#include<iostream>  
using namespace std;

int main()
{
int x, y;
int宣告x值與y值
while (cin >> x >> y) {
while迴圈依序輸入x,y值
int Test_radius = 10000;
int宣告設置半徑=10000
double new_radius = (x * x) + (y * y);
double宣告新半徑=x平方+ y平方
if (new_radius < Test_radius) {
            cout << "inside\n";
if如果輸入新半徑<設置半徑 , 輸出inside
  }
        else {
            cout << "outside\n";
else否則輸出outside
  }
    }
    return 0;
}
