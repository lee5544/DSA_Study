#pragma once
/*
*	向量数据结构
*/

typedef int Rank;	//秩
#define DEFAULT_CAPACITY 10;	//向量的默认容量

template <typename T> class Vector {
protected:
	Rank _size; int capacity; T* _elem;    //规模，容量，数据区
	void copyFrom(T const* A, Rank lo, Rank hi);

public:
	//构造函数
	Vector(int c = DEFAULT_CAPACITY, int s, T v = 0)	//默认构造函数
	{
		_elem = new T[_capacity = c];
		for (_size = 0; _size < s; _elem[_size++] = v);
	};
	Vector(T const* A, Rank lo, Rank hi) { copyFrom(A, lo, hi); };
	Vector(T const* A, Rank n) { copyFrom(A, 0, n); };
	Vector(Vector<T> const& V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); };
	Vector(Vector<T> const& V) { copyFrom(V._elem, 0, V._size); };
	//析构函数
	~Vector() { delete[] _elem; };
	//只读访问接口
	//可写访问接口
	//遍历

};