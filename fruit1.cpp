#include "fruit.h"
void fruit::operator*(float r) {
	price *= (100 + r) / 100.0;
}
float fruit::show() {
	return price * many;
}