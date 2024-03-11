#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
	Math m;
	cout << m.Add(3, 5) << endl;
	cout << m.Add(3, 5, 2) << endl;
	cout << m.Add(3.4, 2.5) << endl;
	cout << m.Add(3.2, 2.6, 1.1) << endl;
	cout << m.Mul(5, 5) << endl;
	cout << m.Mul(3, 2, 5) << endl;
	cout << m.Mul(5.5, 5.1) << endl;
	cout << m.Mul(3.2, 2.3, 5.9) << endl;
	cout << m.Add(5, 2, 3, 4, 5, 6) << endl;
	cout << m.Add("andrei", "basescu");
	return 0;
}