#include <iostream>
using namespace std;

float FahrToC(float fahr)
{
    fahr -= 32
    return fahr*5/9;
}

int main()
{
    float fTemp, cTemp;

    cout << "화씨온도";
    cin >> fTemp;
    cTemp = FahrToC(fTemp);
    cout << "--> 섭씨온도" << cTemp << endl;
    return 0;
}