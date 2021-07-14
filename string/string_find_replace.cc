/*************************************************************************
	> File Name: string_find.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Wed 14 Jul 2021 08:34:11 AM CST
	> Discription: 字符串查找find和rfind
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

void test01() {
	string s = "test01";
	int pos = s.find("t");
	cout << "find(str): " << pos << endl;

	pos = s.find("x");
	cout << "not find(str): " << pos << endl;
	
	pos = s.find("te", 0);
	cout << "find(str, pos): " << pos << endl;

	pos = s.find("tx", 0, 1);
	cout << "find(str, pos, n): " << pos << endl;

	pos = s.find("tx", 0, 2);
	cout << "find(str, pos, n): " << pos << endl;

	pos = s.find('x');
	cout << "not find(char): " << pos << endl;

	pos = s.find('t', 2);
	cout << "find(char, pos): " << pos << endl;

	pos = s.rfind("t");
	cout << "rfind: " << pos << endl;

	pos = s.rfind("e", 0);
	cout << "not rfind(str, pos): " << pos << endl;

	pos = s.rfind("e", 4);
	cout << "rfind(str, pos): " << pos << endl;

	pos = s.rfind("te", 4, 2);
	cout << "rfind(str, pos, n): " << pos << endl;
}

void test02() {
	string s = "abcdef";
	s.replace(0, 3, "111");
	cout << s << endl;
}

int main() {
	test01();
	test02();

    return 0;
}
