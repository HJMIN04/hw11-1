#include <iostream>
#include "store2.h"
using namespace std;
float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	return x;
}
// polymorphism
float store::total(float exchangeRate) {
	return total() / exchangeRate;
}
// operator overloading
store store::operator+(store& b) {
	store c;
	cout << apple.many << endl;
	c.apple.many = apple.many + b.apple.many;
	c.pear.many = pear.many + b.pear.many;
	c.peach.many = peach.many + b.peach.many;
	if (apple.price < b.apple.price) c.apple.price = apple.price;
	else  c.apple.price = b.apple.price;
	if (pear.price < b.pear.price) c.pear.price = pear.price;
	else  c.pear.price = b.pear.price;
	if (peach.price < b.peach.price) c.peach.price = peach.price;
	else  c.peach.price = b.peach.price;
	return c;
}
store store::operator-(store& b) {
	store a;
	a.apple.many = apple.many - b.apple.many;
	a.pear.many = pear.many - b.pear.many;
	a.peach.many = peach.many - b.peach.many;
	if (apple.price < b.apple.price) a.apple.price = apple.price;
	else  a.apple.price = b.apple.price;
	if (pear.price < b.pear.price) a.pear.price = pear.price;
	else  a.pear.price = b.pear.price;
	if (peach.price < b.peach.price) a.peach.price = peach.price;
	else  a.peach.price = b.peach.price;
	return a;
}

store& store::operator*=(int n){
	apple.many= apple.many* n;
	pear.many =  pear.many* n;
	peach.many = peach.many * n;
	return *this;
}