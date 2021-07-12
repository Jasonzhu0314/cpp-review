/*************************************************************************
	> File Name: template_friend_func.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Fri 09 Jul 2021 04:50:43 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

// 由于需要使用Person作为函数参数
template<class T> class Person;
template<class T>
ostream& operator<<(ostream& os, const Person<T> &p);

// 不同于普通的友元函数，模板类的友元函数在调用之前需要先定义或者声明；
template <class T>
void MyPrint(const Person<T> &p) {
    cout << p.name_ << ":" << p.age_ << endl;
}

template<class T> 
class Person {
public:
    // 重载<< 运算符
    friend ostream& operator<< (ostream& os, const Person<T> &p);

    friend void MyPrint<>(const Person<T> &p);
    friend void MyPrint2();
    Person(string name, T age) {
        this->name_ = name;
        this->age_ = age;
    }
private:
    string name_;
    T age_;
    
};

template<class T>
ostream& operator<<(ostream& os, const Person<T> &p) {
    cout << p.name_ << ":" << p.age_ << endl;
}

void MyPrint2() {
    cout << "10" << endl;
}

int main() {
    Person<int> p("Tom", 10);
    cout << p;
    MyPrint(p);

    return 0;
}
