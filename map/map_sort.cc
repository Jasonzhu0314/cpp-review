/*************************************************************************
	> File Name: map_sort.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Tue 13 Jul 2021 07:59:17 AM CST
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

class MyCompare {
public:
	bool operator()(int a, int b) {
		return a > b;
	}
};

template<class T>
void PrintMap(map<int, int, T> &m) {
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << "key:" << (*it).first << " value:" << it->second << endl;   
    }
    cout << endl;
}

void test02() {
	map<int, int, MyCompare> m;
	m.insert(pair<int, int> (1, 10));
	m.insert(make_pair(3, 30));
	m.insert(pair<int, int> (2, 20));
	m.insert(map<int, int>::value_type(5, 50));
	PrintMap(m);
}

int main() {

    test02();

    return 0;
}
