/*************************************************************************
	> File Name: map_find_count.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Tue 13 Jul 2021 07:43:06 AM CST
	> Discription: map中的find(查找)和count(计数)
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

void test01() {
	map<int, int> m;
	m.insert(pair<int, int> (1, 10));
	m.insert(make_pair(3, 30));
	m.insert(map<int, int>::value_type(5, 50));
	m[2] = 20;

	// find返回的是的迭代器的位置
	auto it = m.find(2);
	if(it != m.end()) {
		cout << "find key 2 in map" << endl;
		cout << "key:" << it->first << " value: " << it->second << endl;
	} else {
		cout << "find key 2 not in map" << endl;
	}
	// count 返回是int类型，map返回要么是0，要么是1，因为键值不重复;
	cout << m.count(2) << endl;
}

void PrintMap(multimap<int, int> &m) {
    for (multimap<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key:" << (*it).first << " value:" << it->second << endl;   
    }
    cout << endl;
}

void test02() {
	multimap<int, int> m;
	m.insert(pair<int, int> (1, 10));
	m.insert(make_pair(3, 30));
	m.insert(pair<int, int> (2, 20));
	m.insert(pair<int, int> (2, 10));
	m.insert(map<int, int>::value_type(5, 50));
	//m[2] = 20; 不支持[]方式插入
	PrintMap(m);

	// find返回的是的迭代器的位置
	auto it = m.find(2);
	if(it != m.end()) {
		cout << "find key 2 in multimap" << endl;
		cout << "key:" << it->first << " value: " << it->second << endl;
	} else {
		cout << "find key 2 not in multimap" << endl;
	}
	// count 返回是int类型，map返回要么是0，要么是1，因为键值不重复;
	cout << m.count(2) << endl;

}

int main() {
	test01();
	test02();

    return 0;
}
