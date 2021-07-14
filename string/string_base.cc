/*************************************************************************
	> File Name: string_base.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Tue 13 Jul 2021 09:12:42 AM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

void test01() {

    string s("I");
    // 有参构造函数
    cout << s << endl;
    s += " Love";
    cout << s << endl;
    s.append(": LOL");
    cout << s << endl;
    // 拷贝构造函数 
    string s1(s);
    s += s1;
    cout << s << endl;

    s.append(s1);
    cout << s << endl;
    cout << "s1:" << s1 << endl;

    // 区间拷贝构造函数 
    string s2(s, 0, 5);
    cout << "s2:" << s2 << endl;
    string s3(10, 'c');
    cout << "s3:" << s3 << endl;
    string s4;
    s4 = s;
    cout << "s4:" << s4 << endl;

    string s5;
    s5 = "I Love";
    cout << "s5:" << s5 << endl;

    char *p = const_cast<char *> (s5.c_str());
    printf("%s\n", s5.c_str());

    printf("%s\n", s5.data());

}

int main() {
    test01();
    return 0;
}
