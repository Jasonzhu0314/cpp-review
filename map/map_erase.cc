/*************************************************************************
	> File Name: map_erase.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Tue 13 Jul 2021 07:07:28 AM CST
    > Discription: map中的插入(insert)和删除(erase)
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

void PrintMap(const map<int, string> &m) {
    for(map<int, string>::const_iterator it = m.begin(); it != m.end(); it++) {
        cout << "key: " << it->first << " value: " << it->second << endl;
    }
    cout << endl;
}

void test01() {
    map<int, string> m;
    m.insert(pair<int, string> (2, "20"));
    m.insert(make_pair(1, "10"));
    m.insert(map<int, string>::value_type(5, "50"));
    // 不建议使用这种方式，如果出现同名，会覆盖之前的key对应的value值
    m[3] = "30";
    m[5] = "30";
    m.insert(map<int, string>::value_type(5, "50"));
    PrintMap(m);

    //如果不存在，则自动赋值，int赋值为0，string 赋值为空，可用empty判断；
    cout << "find key not in map\n";
    cout << m[4] << endl;
    PrintMap(m);

    m.erase(2);
    cout << "erase key 2\n";
    PrintMap(m);

    m.erase(m.begin());
    cout << "erase m.begin()\n";
    PrintMap(m);

    m.erase(m.begin(), ++m.begin());
    cout << "erase m.begin, ++m.begin\n";
    PrintMap(m);

    m.erase(m.begin(), m.end());
    cout << "erase m.begin, m.end\n";
    PrintMap(m);

    m.clear();
    cout << " m.clear\n";
    PrintMap(m);
}

int main() {
    test01();

    return 0;
}
