/*************************************************************************
	> File Name: my_array.cc
	> Author:Jasonzhu 
	> Mail: jasonzhu_0314@163.com
	> Created Time: Fri 09 Jul 2021 08:06:20 AM CST
	> Discriptions: 实现一个数组模板类，可以存储基础和自定义的类对象
 ************************************************************************/

#include <iostream>
//#include <string>
using namespace std;

template<class T>
class MyArray {
public:
	MyArray(int capacity) {
		//cout << "Params Constructor" << endl;
		this->capacity_ = capacity;
		this->size_ = 0;
		this->p_address_ = new T[capacity];
	}

	MyArray& operator=(const MyArray& arr) {
		if (this->p_address_ != NULL) {
			delete []this->p_address_;
		}
		this->capacity_ = arr.capacity_;
		this->size_ = arr.size_;
		this->p_address_ = new T[arr.capacity_];

		for(int i = 0; i < arr.capacity_; i++) {
			this->p_address_[i] = arr.p_address_[i];
		}
		//cout << "Operator= Func" << endl;
	}

	MyArray (const MyArray& arr) {
		this->capacity_ = arr.capacity_;	
		this->size_ = arr.size_;
		this->p_address_ = new T[arr.capacity_];

		for (int i = 0; i < arr.capacity_; i++) {
			this->p_address_[i] = arr.p_address_[i];
		}
		//cout << "Copy Constructor Func" << endl;
	}

	void PushBack(T& val) {
		// 尾插法
		if (this->size_ == this->capacity_) {
			// 可以进行扩容，有bug
			// T* temp = new T[this->capacity_ + this->capacity_/2];
			cout << "Out of the Capacity" << endl;
			return ;	
		}
		this->p_address_[this->size_] = val;
		this->size_++;
	}
	
	void PopBack() {
		// 尾删法
		if (this->size_ == 0) {
			cout << "NO member in MyArray" << endl;
			return ;
		}
		this->size_--;
	}

	T& operator[](int index) {
		// 通过[] 访问数组中的元素
		if (index < 0) {
			cout << "index must > 0" << endl;
			//return (T)NULL;
		}

		if (index >= this->size_) {
			// 只能将范围限制在 size之内，有bug
			cout << "index must < MyArray size" << endl;
			//return (T)NULL;
		}
		return this->p_address_[index];	
	}

	int GetCapacity() {
		return this->capacity_;
	}

	int GetSize() {
		return this->size_;
	}

	~MyArray() {
		if (this->p_address_ != NULL) {
			delete [] this->p_address_;
			this->p_address_ = NULL;
		}
		//cout << "Desconstructor Func" << endl;
	}
	
private:
	T* p_address_ = NULL;
	int capacity_;
	int size_;
};

void PrintIntMyarray(MyArray<int>& arr) {
	cout << "My Int Array member:" << endl;
	for (int i = 0; i < arr.GetSize(); i++) {
		cout << i << ":" << arr[i] << endl;
	}
}

void test01() {
	MyArray<int> arr1(10);
	cout << arr1.GetCapacity() << endl;
	MyArray<int> arr2(arr1);
	MyArray<int> arr3(100);
	arr3 = arr1;  
	for (int i = 0; i < 5; i++) {
		arr1.PushBack(i);
	}
	cout << "Int Array Capacity: " << arr1.GetCapacity() << endl;
	cout << "Int Array Size: " << arr1.GetSize() << endl;
	PrintIntMyarray(arr1);
	arr1.PopBack();
	cout << "尾删法之后" << endl;
	cout << "Int Array Capacity: " << arr1.GetCapacity() << endl;
	cout << "Int Array Size: " << arr1.GetSize() << endl;
	PrintIntMyarray(arr1);

}

class Person {
public:
	Person() {};
    Person(string name, int age) {
        this->name_ = name;
        this->age_ = age;
    }
    string name_;
    int age_;
};

void PrintPersonArray(MyArray<Person>& p_arr) {
	cout << "My Person Member:" << endl;
    for(int i = 0; i < p_arr.GetSize(); i++) {
        cout << p_arr[i].name_ << ":" << p_arr[i].age_ << endl;
    }
}

void test02() {
    Person p1("Tom", 10);
    Person p2("Jerry", 11);
    Person p3("Jason", 12);
    Person p4("zhu", 13);
    Person p5("Sun", 14);

    MyArray<Person> p_arr(10);
	p_arr.PushBack(p1);
	p_arr.PushBack(p2);
	p_arr.PushBack(p3);
	p_arr.PushBack(p4);
	p_arr.PushBack(p5);
	cout << "Person Array Capacity: " << p_arr.GetCapacity() << endl;
	cout << "Person Array Size: " << p_arr.GetSize() << endl;
	PrintPersonArray(p_arr);
	p_arr.PopBack();
	cout << "尾删法之后" << endl;
	cout << "Person Array Capacity: " << p_arr.GetCapacity() << endl;
	cout << "Person Array Size: " << p_arr.GetSize() << endl;
	PrintPersonArray(p_arr);
}

int main() {
	test01();
	test02();

    return 0;
}
