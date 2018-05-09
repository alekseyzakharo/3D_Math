#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
	Vector2d v(1, 1);
	Vector2d v1(2, 2);

	v -= v1;

	cout << v.getX() << " " << v.getY()<< " " << (v != v1) << " \n";
	system("pause");
	return 0;
}