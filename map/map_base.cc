/*************************************************************************
	> File Name: map_base.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Mon 12 Jul 2021 09:16:24 PM CST
    > Discription: map的基础操作
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

void PrintMap(map<int, int> &m) {
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key:" << (*it).first << " value:" << it->second << endl;   
    }
    cout << endl;
}

void test01() {
    // 关联式容器
    // 默认构造函数
    map<int, int> m;
    m.insert(pair<int, int> (1, 10));
    m.insert(pair<int, int> (2, 20));
    m.insert(pair<int, int> (4, 40));
    m.insert(pair<int, int> (5, 50));
    m.insert(pair<int, int> (3, 30));
    PrintMap(m);

    // 拷贝构造函数
    map<int, int> m1(m);
    PrintMap(m1);

    // 赋值函数
    map<int, int> m2;
    m2 = m;
    PrintMap(m2);

    if (m.empty()) {
        cout << "m is none" << endl;
    } else {
        cout << "m is not none" << endl;
    }

    cout << m.size() << endl;
}

int main() {
    
    test01();

    return 0;
}
