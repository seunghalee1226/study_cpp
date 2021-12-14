#include <iostream>
using namespace std;
#include "VecF.h"

int main()
{
    float a[3] = {1, 2, 3};
    VecF v1(3, a);
    /*
    정의한 VecF 클래스의 객체 v1을 복사하여 v2에 저장
    클래스에서는 복사 생성자가 없으므로, 객체의 데이터 멤버를 그대로 복사하도록 묵시적으로 선언된 복사 생성자가 동작
    */
    VecF v2(v1);
    v1.print();
    cout << endl;
    v2.print();
    cout << endl;
    return 0;
}