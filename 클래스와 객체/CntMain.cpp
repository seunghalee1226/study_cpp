#include <iostream>
#include "Counter.h"

int main()
{
    Counter cnt; // Counter 객체의 정의 - 생성자로 인하여 value는 자동적으로 0

    cout << "계수기의 현재 값: " << cnt.getValue() << endl;
    cnt.count(); // 계수기 1 증가
    cnt.count();
    cout << "계수기의 현재 값: " << cnt.getValue() << endl;
    return 0;
}