/*************************************************************************
	> File Name: string_insert_erase.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Wed 14 Jul 2021 10:30:39 AM CST
	> Discription: 字符串查找和删除
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

void test01() {
    string s = "hello";
    s.erase(0, 2);
	// erase(start_pos, len)
	cout << "erase(start_pos, len): " <<  s << endl;

	s = "hello";
	s.erase(s.begin() + 1);
	cout << "erase(iterator): " <<  s << endl;

	// 区间删除
	s = "hello";
	s.erase(s.begin() + 1, s.end() - 1);
	cout << "erase(iterator_start, iterator_end): " <<  s << endl;

	// 查找和删除获取子串
	s = "jasonzhu_0314@163.com";
	int pos = s.find('@');
	s.erase(pos, s.size() - pos);		
	cout << "erase(start_pos, len): " <<  s << endl;

}

void test02() {
	string s = "hello";
	s.insert(0, "nihao");
	cout << "insert(pos, char*)" << s << endl;

	s = "hello";
	s.insert(0, "nihao", 2);
	cout << "insert(pos, string, n)" << s << endl;
	
	s = "hello";
	s.insert(0, 2, 'c');
	cout << "insert(pos, n, char)" << s << endl;

	s = "hello";
	s.insert(s.begin() + 3, 1, 'c');
	cout << "insert(iterator, n, char)" << s << endl;

	s = "hello";
	s.insert(s.end(), 'c');
	cout << "insert(iterator, char)" << s << endl;
	
}


int main() {
	test01();
	test02();

    return 0;
}
