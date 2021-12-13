#inclue <iostream>
using namespace std;

struct SalesRec{
    char pID[10];
    int dYear, dMonth, dDate;
    char deliverAddr[40];
}

void PrSalesRec(const SalesRec &srec);

int main()
{
    SalesRec s = {"C25TV001", 2019, 11, 15, "서울시 종로구 대학로 86"};
    PrSalesRec(s);
    return 0;
}

// 매개변수 srec은 참조형, const 가 지정되어 있음. 
// 이는 srec이 참조하는 값이 PrSalesRec()을 실행하는 동안 바뀌지 않는 다는 것을 의미
void PrSalesRec(const SalesRec &srec) // srec은 상수 인수
{
    cout << "품목코드 : " << srec.pID << endl;
    cout << "배달일자 : " << srec.dYear << "년";
    cout << srec.dMonth << "월";
    cout << srec.dDate << "일";
    cout << "배달주소" << srec.deliverAddr << endl;
}