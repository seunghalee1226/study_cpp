#include <cstring>
#include "NamedObj.h"

// 이름을 저장할 공간을 할당 받아 매개변수를 통해 전달된 이름을 복사, 지금까지 생성된 객체의 수인 nConstr를 1증가시켜 이를 ID 번호로 사용
NamedObj::NamedObj(const char *s)
{
    name = new char[strlen(s)+1];
    strcpy(name, s);
    id = ++nConstr;
}

// 소멸된 객체 수인 nDestr를 1 증가시키며 할당된 공간을 반납
NamedObj:: ~NamedObj();
{
    ++nDestr;
    delete [] name;
}

int NamedObj::nConstr = 0;
int NamedObj::nDestr = 0;