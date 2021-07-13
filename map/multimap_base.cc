/*************************************************************************
	> File Name: multimap_base.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Tue 13 Jul 2021 06:37:41 AM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
using namespace std;

void PrintMap(const multimap<int, string> &m) {
    for(multimap<int, string>::const_iterator it = m.begin(); it != m.end(); it++) {
        cout << "key:" << it->first << " value:" << it->second << endl;
    }
    cout << endl;
}

void test01() {
    multimap<int, string> m;
    m.insert(pair<int, string> (1, "10"));
    m.insert(make_pair(3, "30"));
    m.insert(multimap<int, string>::value_type(2, "20"));
    cout << "m:" << endl;
    PrintMap(m);

    multimap<int, string> m1(m);
    cout << "m1:" << endl;
    PrintMap(m1);

    multimap<int, string> m2;
    m2 = m;
    cout << "m2:" << endl;
    PrintMap(m2);
}

int main() {
    test01();

    return 0;
}
