/*************************************************************************
	> File Name: map_swap.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Tue 13 Jul 2021 07:38:27 AM CST
	> Discription: map中的交换
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

void PrintMap(map<int, int> &m) {
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << "key: " << it->first << " value:" << it->second << endl;
	}
	cout << endl;
}

void test02() {
    map<int, int> m;
    m.insert(pair<int, int> (1, 10));
    m.insert(pair<int, int> (2, 20));
    m.insert(pair<int, int> (4, 40));
    m.insert(pair<int, int> (5, 50));
    m.insert(pair<int, int> (3, 30));
    cout << "m: " << endl;
    PrintMap(m);

    map<int, int> m1;
    m1.insert(pair<int, int> (7, 70));
    m1.insert(pair<int, int> (8, 80));
    m1.insert(pair<int, int> (9, 90));
    cout << "m1: " << endl;
    PrintMap(m1);

    // 交换
    m.swap(m1);
    cout << "m: " << endl;
    PrintMap(m);
    cout << "m1: " << endl;
    PrintMap(m1);
}

int main() {
	test02();

    return 0;
}
