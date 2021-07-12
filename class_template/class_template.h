#ifndef _CLASS_TEMPLATE_H_
#define _CLASS_TEMPLATE_H_
#endif

#include <stdio.h>
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