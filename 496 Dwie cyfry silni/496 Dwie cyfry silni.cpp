// 496 Dwie cyfry silni.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int d, n;
	cin >> d;
	for (int i = 0; i<d; i++)
	{
		cin >> n;
		if (n <= 1)        cout << 0 << " " << 1 << endl;
		else if (n == 2)   cout << 0 << " " << 2 << endl;
		else if (n == 3)   cout << 0 << " " << 6 << endl;
		else if (n == 4)   cout << 2 << " " << 4 << endl;
		else if (n == 5)   cout << 2 << " " << 0 << endl;
		else if (n == 6)   cout << 2 << " " << 0 << endl;
		else if (n == 7)   cout << 4 << " " << 0 << endl;
		else if (n == 8)   cout << 2 << " " << 0 << endl;
		else if (n == 9)   cout << 8 << " " << 0 << endl;
		else            cout << 0 << " " << 0 << endl;
	}
	return 0;
}
