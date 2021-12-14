#ifdef VEC_F_H_INCLUDED
#define VEC_F_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;

class VecF{
    int n;
    float *arr;
public:
    // n개의 float 값을 저장할 수 있는 공간을 동적으로 할당하여 객체를 생성
    // 초기화에 사용할 데이터가 제공될 경우(형식 매개변수 a가 nullptr가 아닌 경우) memcpy 함수를 이용하여 arr에 복사
    VecF(int d, float* a=nullptr) : n{d}{
        arr = new float[d];
        if (a) memcpy(arr, a, sizeof(float) *n);
    }
    // 복사되는 객체의 이름을 저장하기 위한 공간을 별도로 할당 받아 이름을 복사하도록 복사 생성자 선언
    VecF(const VecF& fv): n{fv.n}{
        arr = new float[n];
        memcpy(arr, fv.arr, sizeof(float)*n);
    }
    // 이동 생성자를 선언
    // 
    VecF(VecF&& fv) : n {fv.n}, arr {fv.arr}{
        fv.arr = nullptr;
        fv.n = 0;
    }
    // 소멸자는 할당 메모리를 반납
    ~VecF(){
        delete[] arr;
    }
    // add는 반복문으로 객체가 저장하고 있는 벡터와 형식 매개변수 fv를 통해 전달되는 벡터를 더함
    // 그 결과는 tmp에 저장되며, tmp를 함수의 결과로 반환
    VecF add(const VecF& fv) const{
        VecF temp(n);
        for (int i=0;i<n;i++)
            tmp.arr[i] = arr[i] + fv.arr[i];
            return tmp;
    }
    void print() const{
        cout << "[";
        for (int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << "]";
    }
};
#endif // !VEC_F_H_INCLUDED