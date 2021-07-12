/*************************************************************************
	> File Name: out_member_func_definition.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Wed 07 Jul 2021 09:26:13 AM CST
    > Description: 类模板外部成员函数的定义 
 ************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;

template <class NameType, class AgeType>
class Person { 
public: 
	NameType name_; 
	AgeType age_; 
	Person(NameType name, AgeType age); 
	void ShowPerson(); 
	~Person() { } 
	
};

// 类模板外部定义带NameType和AgeType参数的模板成员函数
template <class NameType, class AgeType>
Person<NameType, AgeType>::Person(NameType name, AgeType age) {
	this->name_ = name;
	this->age_ = age;
	cout << "constructor func" << endl;
}

// 类模板外部定义不带参数的模板成员函数
template <class NameType, class AgeType>
void Person<NameType, AgeType>::ShowPerson() {
	cout << "Name:" << this->name_ << ", Age:" << this->age_ << endl;
}

int main() {
	Person<string, int> p1("TOM", 2);
	p1.ShowPerson();


    return 0;
}
