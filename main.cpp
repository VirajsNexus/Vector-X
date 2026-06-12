#include <iostream>
#include "Vector.h"

using namespace std;

int main(void)
{
    Vector v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "First Element  : \t" << v[0] << endl;
    cout << "Second Element : \t" << v[1] << endl;
    cout << "Third Element  : \t" << v[2] << endl;

    v[1] = 100;

    cout << "\nAfter Modification:\n";

    cout << "First Element  : \t" << v[0] << endl;
    cout << "Second Element : \t" << v[1] << endl;
    cout << "Third Element  : \t" << v[2] << endl;

    return (0);
}