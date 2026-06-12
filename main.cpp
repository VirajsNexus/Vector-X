#include <iostream>
#include "Vector.h"

using namespace std;

int main(void)
{
    Vector v;

   v.push_back(10);
    v.push_back(30);
    v.push_back(40);

    cout << "Original:\n";
    v.print();

    v.insert(1, 20);

    cout << "\nAfter insert:\n";
    v.print();

    v.erase(2);

    cout << "\nAfter erase:\n";
    v.print();

    return (0);
}