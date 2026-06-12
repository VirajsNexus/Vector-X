#include <iostream>
#include "Vector.h"

using namespace std;

int main(void)
{
    Vector v;

   for(int i = 0; i < 10; i++)
   {
        v.push_back(i * 10);
   }
   v.print();

   cout << "Element at index 2: " << v[2] << endl;
    cout << "Front element: " << v.front() << endl;

    v.clear();

    cout << "Size after clear: " << v.getSize() << endl;
    cout << "Is vector empty? " << v.empty()<< endl;

    return (0);
}