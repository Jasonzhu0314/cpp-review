/*************************************************************************
	> File Name: inheritance.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Thu 08 Jul 2021 02:00:05 PM CST
	> Discription: 类模板的继承
 ************************************************************************/

#include <iostream>
using namespace std;

template<class T>
class Base {
	T m;
};

//class Son:public Base {
//1. 通过传递模板参数
//template<class T>
//class Son:public Base<T> {

//2. 显式指定父类的模板参数类型
//class Son:public Base<int> {

//};

//3. 子类也变成类模板
template<class Tson, class TBase>
class Son:public Base<TBase> {
	Tson m1;
};

int main() {
	Son<int, int> son;
    return 0;
}
