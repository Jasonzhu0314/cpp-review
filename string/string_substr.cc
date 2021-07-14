/*************************************************************************
	> File Name: string_substr.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Wed 14 Jul 2021 02:36:18 PM CST
	> Discription: 获取字符串子串
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

void test01() {
	string s = "abcdef";
	string s_sub = s.substr(1, 3);
	cout << s_sub << endl;
	cout << "s.size:" << s.size() << endl;
	cout << "s.capcity:" << s.capacity() << endl;

}

int main() {
	test01();

    return 0;
}
