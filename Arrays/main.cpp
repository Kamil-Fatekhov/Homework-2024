#include "header.h"


int main() {
	Array arr;
	arr.append(10);
	arr.append(20);
	arr.append(30);
	arr.append(40);
	arr.print();
	cout << arr.search(30)<<endl;
	cout << arr.search(50)<<endl;
	cout << "max =" << arr.GetMax()<<endl;
	cout << "min =" << arr.GetMin();

	return 0;
}