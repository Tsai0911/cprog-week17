#include <iostream>
#include <iomanip>

using namespace std;

// ==============================================
// -----^^----- 不得修改『以上』的程式 -----^^-----
// ==============================================

// 1. 你所寫的程式碼只能在這個段落。
// 2. 請依照題目說明完成欠缺的程式碼。

int main()
{
    int n;
    int m;
    cin >> n >> m;
    for (int i = 1; i <= n;i ++)
    {
        if ( i % m == 0)
        cout << setw(4) << i;
    }
    cout << endl;

    return 0;
}
