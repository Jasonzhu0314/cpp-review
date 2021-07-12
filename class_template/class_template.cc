#include "class_template.h"

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
