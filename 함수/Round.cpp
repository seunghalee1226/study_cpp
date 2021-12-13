#include <iostream>
#include <cmath>
using namespace std;
// 디폴트 인수는 반드시 인수 리스트의 끝에 있어야 함. 
// 2개 이상의 디폴트 인수가 있을 때 뒤의 인수는 디폴트 값이 아닌 다른 값을 전달하고 싶다면
// 앞의 인수는 디폴트 값을 사용한다 할지라도 명시적으로 지정해야 함
// void g(int x, int y=10, z); 는 오류가 발생함 
double Round(double x, int d = 0);
int main()
{
    double a;
    cout << "값=";
    cin >> a;

    cout << "반올림 --> " << Round(a) << endl;
    cout << "           " << Round(a, 1) << endl;
    cout << "           " << Round(a, 2) << endl;
    cout << "           " << Round(a, 3) << endl;
    return 0;
}

// 반올림 함수
double Round(double x, int d)
{
    double a = x > 0 ? 0.5 : -0.5;
    double pow10 = pow(10, d);
    return trunc(x * pow10 + a) / pow10;
}