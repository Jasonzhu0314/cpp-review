/*************************************************************************
	> File Name: member_func_create_timing.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Thu 08 Jul 2021 08:51:04 AM CST
	> Discriptions: 类模板的成员函数创建时机
 ************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;

class Person1 {
public:
	void ShowPerson1() {

	}
};

class Person2 {
public:
	void ShowPerson2() {

	}
};

template<class T>
class MyClass {
public:
    T obj;

	void func1() {
		obj.ShowPerson1();
	}

	void func2() {
		obj.ShowPerson2();
	}
};

class MyClass1 {
public:
	Person1 obj;
	void func1() {
		obj.ShowPerson1();
	}	
};

void test01() {
	MyClass<Person1> m;
	//m.func1(); // 程序编译不会报错，此时成员函数还没有创建
	//m.func2(); // 编译器检查语法没有错误，只在编译过程会报错
}

int main() {

    return 0;
}
