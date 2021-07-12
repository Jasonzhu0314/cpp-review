/*************************************************************************
	> File Name: function_template.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Wed 07 Jul 2021 08:51:45 AM CST
    > Discription: 函数模板
 ************************************************************************/

#include <iostream>
using namespace std;

void MyPrintf(int a, int b) {
	// 普通函数
	cout << "common func" << endl;
}

template<class T>
void MyPrintf(T a, T b) {
	// 模板函数
	cout << "func template" << endl;
}

template<class T>
void MyPrintf(T a, T b, T c) {
	// 模板函数重载
	cout << "func template override" << endl;
}

int main() {
	int a = 10;
	int b = 10;
	char c = 10;
	char d = 10;
	// 普通函数
	MyPrintf(a, b);	

	// 空模板参数列表模板函数
	MyPrintf<>(a, b);
	// 模板函数
	MyPrintf(c, d);
	// 模板函数重载
	MyPrintf(a, b, 100);

    return 0;
}
