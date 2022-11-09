#pragma once
#include <iostream>

class Korin {
	int a, b, c;
	float x1,x2;
public:
	Korin(int valuea, int valueb, int valuec){
		a = valuea;
		b = valueb;
		c = valuec;
	}
	float Dyskriminant();
	float sqrtDyskriminant();
	float sqrtexception();
	float obchyslennya();
	void Display();
	


};
