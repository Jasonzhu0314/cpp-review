# string

[api网站查询](https://www.cplusplus.com/reference/)

## 创建

```c++
// 默认构造函数
string s;

// 赋值构造函数
string s = "nihao";

// 有参构造函数
string s("nihao");
// 区间拷贝构造函数
string s(s1, 0, 8);

// n个char
string s(10, 'c');
```



## 转换为c语言

风格字符串**const_cast**

```c++
s.c_str() // 返回的是const char*， 如果要使用char*，需要const_cast
s.data() // 跟c_str()一样
```



## 拼接

使用+和append的方式

```c++
s += "nihao";
s.append("nihao");
```



## 插入

```c++
// 指定位置，指定字符串或者字符，
s.insert(0, str, 3); // 插入位置，字符串（只能）， 插入到字符串的长度
s.insert(迭代器位置， 字符) // 只能字符
```



## 删除

```c++
//
s.erase(起始位置，长度);
s.erase(迭代器区间);
s.clear();
```



## 替换

```c++
s.replace(start_pos, n, 字符串/char*) // 从pos位置开始的n个字符替换成字符串
```



## 查找

```c++
// find 和 rfind， 一个正向，一个反向，返回所在的pos，起始位从0开始
// 找不到返回-1
int pos = s.find(char/srt);
int pos = s.find(char/srt, start_pos, 要查找的子串的长度/字符没有);
```



## 获取子串

```c++
str.substr(起始位置，长度); // 从起始位置截取指定长度的字符串
```



## 比较

```c++
string str1 = "hello";
string str2 = "xello";
str1.compare(str2) == 0; // string字符串相等
// 通过比较str1和str2中的每一位相减的结果
```



