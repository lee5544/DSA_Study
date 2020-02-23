
#include "Vector.h"

template <typename T>

void Vector<T>::copyFrom(T const* A, Rank lo, Rank hi)
{
	_elem = new T[2 * (hi - lo + 1)];
	_size = 0;
	while (lo < hi){ _elem[_size++] = A[lo++]; }
}