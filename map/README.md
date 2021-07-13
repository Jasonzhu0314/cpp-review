# map/multimap

## 简介

关联式容器（二叉树结构），自动排序

map的key值不可重复，multimap的key值可重复

## 基本操作

### 构造函数

```c++
// 默认构造函数
map<int, int> m;
// 拷贝构造函数
map<int, int> m1(m);
// 赋值函数
map<int, int> m2;
m2 = m;
```

### 插入元素

```c++
m.insert(pair<int, int> (8, 10));
m.insert(make_pair(8, 10));
m.insert(map<int, int>::value_type(8, 10));

// map, 不建议使用这种方法，当m中有key：value时，会覆盖新的value
// pair不会覆盖，保留初始值
m[8] = 10;
cout << m[5] << endl; // map中的key:5的value对应的值会被赋值，int赋值为0，string赋值为空
// multimap没有重载[]，不能使用[]访问
```



### 删除 

1. 迭代器

   ```c++
   m.erase(m.begin());
   ```

2. 按照key删除

   ```c++
   m.erase(key);
   ```

3. 区间

   ```
   m.erase(m.begin(), ++m.begin());
   ```

4. 清空

   ```c++
   m.erase(m.begin(), m.end());
   m.clear();
   ```

   

### 大小
```c++
int m_size = m.size();
```

### 判空

```c++
if (m.empty()) {
    cout << "none" << endl;
} else {
    cout << "not none" << endl;
}
```

### 打印

使用迭代器打印

```c++
for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
    cout << "key:" << (*it).first << "value: " << it->second << endl;
}
```



### 查找

按key查找

```c++
// find 返回迭代器，遍历map，如果最后定位不等于m.end，即为找到
if (m.find(3) != m.end()) {
    cout << "find" << endl;
} else {
    cout << "not find" << endl;
}

// count 返回int，map返回值要么为0，要么为1， multimap会返回大于1的值
if (m.count(2) > 0) {
    cout << "find" << endl;
} else {
    cout << "not find" << endl;
}
```

### 排序

定义仿函数，由于是关联式容器，在创建map时，将仿函数传递进去，默认排序方式是从小到大，编写从大到小

```c++
class MyComapre {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

map<int, int, MyCompare> m;
```



### 交换

```c++
map<int, int> m1;
...insert...

map<int, int> m2;
...insert...
// m1和m2交换
m1.swap(m2)
```



