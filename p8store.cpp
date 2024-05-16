#include <iostream>
#include "store2.h"
using namespace std;
int main() {
	store A, B, C, D, E;
	A = store(4, 3, 3, 800, 1000, 800);
	B = store(3, 3, 4, 1000, 1200, 1000);
	C = A + B;
	cout << A.total() << " " << B.total() << endl;
	cout << C.total() << endl;
	cout << C.apple.many << endl;
	cout << C.apple.price << endl;
	cout << C.pear.many << endl;
	cout << C.pear.price << endl;
	cout << C.peach.many << endl;
	cout << C.peach.price << endl << endl;
	A = C - B;
	cout << A.total() << endl;
	cout << A.apple.many << endl;
	cout << A.apple.price << endl;
	cout << A.pear.many << endl;
	cout << A.pear.price << endl;
	cout << A.peach.many << endl;
	cout << A.peach.price << endl << endl;

	A *= 3;
	cout << A.apple.many << endl;
	cout << A.pear.many << endl;
	cout << A.peach.many << endl;
	return 123;
}
