#include <iostream>


using namespace std;

template<class T>
class Max4 {
    T a, b, c, d;

    T Max(T a, T b) {
        return a > b ? a : b;
    }

public :
    Max4(T, T, T, T);

    T Max();
    void display(){
        cout<<a<<"---"<<b<<endl;
    }
};

template <class T>
 Max4<T>::Max4(T x1,T x2, T x3, T x4){
    a =x1 ,b=x2,c =x3,d=x4;
}
template <class T>
T Max4<T>::Max() {
    Max4<T>::display();
    return Max(Max(a, b), Max(d, c));
}
int main() {
    Max4<char> C('a','A','B','c');
    Max4<char> b('u','i','o','p');
    std::cout << C.Max()<<b.Max() << std::endl;
    return 0;
}