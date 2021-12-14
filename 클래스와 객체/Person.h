#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
class Person
{
    char *name;
    char *addr;
public:
    Person(const char *name, const char *addr);
    
    //소멸자 : 객체가 소멸될 때 자동으로 실행되는 함수로서, 객체의 소멸에 따라 필요한 제반 처리를 하기 위한 코드 포함
    ~Person(); // 소멸자
    void print() const;
    void chAddr(const char *newAddr);
};
#endif