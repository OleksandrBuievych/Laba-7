#include <iostream>
#include <cmath>
#include <Windows.h>
#include "Header.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Korin one(2, 4, 4);
	one.Dyskriminant();
	one.obchyslennya();
	one.Display();
	try {
		one.sqrtDyskriminant();
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
	try
	{
		one.sqrtexception();
	}
	catch (const runtime_error err)
	{
		cout << err.what() << endl;
	}


	return 0;
}
