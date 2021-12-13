#include <iostream>
using namespace std;
void SwapValues(int &x, int &y) // 원형

int main()
{
    int a, b;

    cout << "두 수를 입력하세요 :";
    cin >> a >> b;
    if (a < b) SwapValues(a, b);
    cout << "큰수 = " << a << "작은수 =" << b << endl;
    return 0;
}

void Swapvalues(int &x, int &y);
{
    int temp = x;
    x = y;
    y = temp;
}