#include<iostream>  
#include <iomanip>  
using namespace std;

int main()
{
    int x;
    while (cin >> x) {
    使用while循環，只要輸入有效，該循環就會繼續運行
        double c = x * 1.6;
        while 循環內，輸入乘以 1.6 以將英里轉換為公里
        cout << fixed << setprecision(1) << c << "\n";
        結果存儲在名為“c”的變量中。'fixed' 和 'setprecision'
函數用於將輸出格式化為一位小數，並使用 'cout' 函數將結果打印到控制台。
    }

    return 0;
}
