#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class Counter{
    int value; // 데이터 멤버 선언 : int 형으로 계수기의 값 저장, 디폴트 : private
public: // 가시성을 public으로 지정, 멤버들은 모두 자유롭게 사용 가능
    
    /* 생성자 
        생성자는 클래스의 이름을 사용하여 선언
        생성자의 머리 부에는 반환 자료형을 표시 하지 않음. 몸체에는 return 명령어로 값 반환 못함
        pulblic 선언한 생성자만 클래스 외부에서 객체를 만드는데 사용 가능
        역할 : 데이터 멤버에 적절한 초기값을 넣음 ==> 초기화 리스트
    */
    Counter() : value{0} {}// 생성자
    
    void reset()
        { value = 0; }

    void count()
        { ++value; }

    // 멤버 함수 내에서 데이터 멤버들의 값이 변경하지 않는 다는 것을 의미
    void getValue() const
        { return value;}
};

#endif //COUNTER_H_INCLUDED