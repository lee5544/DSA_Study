#pragma once
/*
*	�������ݽṹ
*/

typedef int Rank;	//��
#define DEFAULT_CAPACITY 10;	//������Ĭ������

template <typename T> class Vector {
protected:
	Rank _size; int capacity; T* _elem;    //��ģ��������������
	void copyFrom(T const* A, Rank lo, Rank hi);

public:
	//���캯��
	Vector(int c = DEFAULT_CAPACITY, int s, T v = 0)	//Ĭ�Ϲ��캯��
	{
		_elem = new T[_capacity = c];
		for (_size = 0; _size < s; _elem[_size++] = v);
	};
	Vector(T const* A, Rank lo, Rank hi) { copyFrom(A, lo, hi); };
	Vector(T const* A, Rank n) { copyFrom(A, 0, n); };
	Vector(Vector<T> const& V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); };
	Vector(Vector<T> const& V) { copyFrom(V._elem, 0, V._size); };
	//��������
	~Vector() { delete[] _elem; };
	//ֻ�����ʽӿ�
	//��д���ʽӿ�
	//����

};