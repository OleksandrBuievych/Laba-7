#include "Header.h"
#include <iostream>
using namespace std;

float Korin::Dyskriminant()
{
    float D = pow(b, 2) - 4 * a * c;

    return D;
}

float Korin::sqrtDyskriminant()
{
    if (Dyskriminant() < 0) throw "Корінь з від'ємного числа. Спрацював throw";
    float sqrtD = sqrt(Dyskriminant());
    return sqrtD;
}

float Korin::sqrtexception()
{
    if (Dyskriminant() < 0) throw runtime_error("Корінь з від'ємного числа. Спрацював runtime error");
    float sqrtD = sqrt(Dyskriminant());
    return sqrtD;
}

float Korin::obchyslennya()
{
    if (Dyskriminant() > 0) {
        x1 = (-b + sqrtDyskriminant()) / (2 * a);
        x2 = (-b - sqrtDyskriminant()) / (2 * a);
    }
    else if (Dyskriminant() == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
    }
    else
        cout << "Помилка! Дійсних коренів не існує!" << endl; 
    
    return x1,x2;
}

void Korin::Display()
{
    cout << "Рівняння: (" << a << "x^2)+(" << b << "x)+(" << c << ") = 0" << endl;
    cout << "Дискримінант = " << Dyskriminant() << endl;
    if (Dyskriminant() >= 0) {
        cout << "Корінь з дискримінанту = " << sqrtDyskriminant() << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        
    }
    else cout << "Errorrrrrr, корінь з від'ємного числа! Спрацювала обробка без специфікації виключень." << endl; // Без специфікації виключень


}


