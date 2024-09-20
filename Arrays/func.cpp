#include "header.h"
Array::Array() {
	count = 0;
	size = 1;
	array = new int[size];
}
Array::Array(int size) {
	this->size = size;
	count = 0;
	array = new int[size];
}
void Array::append(int elem) {
	if (count == 0) {
		min = elem;
		max = elem;
	}
	if (max < elem)
		max = elem;
	if (min > elem)
		min = elem;
	if (count == size) {
		size*=2;
		int* newArray = new int[size];

		for (int i = 0; i < count; ++i) {
			newArray[i] = array[i];
		}

		delete[] array;
		array = newArray;
	}

	array[count++] = elem;
}
bool Array::search(int elem) {
	for (int i = 0; i < size; i++) {
		if (elem == array[i]) return true;
	}
	return false;
}
int Array::GetMax() {
	return max;
}
int Array::GetMin() {
	return min;
}
Array::~Array() {
	delete[] array;
}
void Array::print() {
	for (int i = 0; i < size; i++)
		cout << array[i] << endl;
}