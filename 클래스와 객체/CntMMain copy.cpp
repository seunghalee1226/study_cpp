#include <iostream>
#include "CounterM.h"

int main()
{
    CounterM cnt(9); // CounterM 객체의 정의 - max 값을 정의하여서 9까지 계수를 하면 0으로 리셋

    cout << "계수기의 현재 값: " << cnt.getValue() << endl;
    
    for (int i=0;i<12;i++){
        cnt.count();
    }
    
    cout << "계수기의 현재 값: " << cnt.getValue() << endl;
    return 0;
}