#include <iostream>
using namespace std;

inline void SwapValues(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cout << "두 수를 입력하시오 : ";
    cin >> a >> b;
    if (a < b) SwapValues(a, b);
    cout << "큰 수 = " << a << "작은수 = " << b << endl;
    return 0;
}

/*
inline을 무시하고 일반 함수와 같이 번역 되는 경우
- 함수가 너무 큰 경우
- 순환 호출
- 프로그램 내에서 그 함수에 대한 포인터를 사용하는 경우

inline 함수가 #define 지시어와 다른 점
- 자료형 검사
- 일반 함수와 동일한 문법
- 인수들은 그 값을 한번만 구현
*/