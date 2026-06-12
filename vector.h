#ifndef VECTOR_H
#define VECTOR_H

class Vector 
{
    private :
        int * data;
        int size;
        int capacity;
        void resize();

    public :
        Vector();
        ~Vector();

        void push_back(int value);

        int getSize();
        int getCapacity();

        int& operator[](int index);

};

#endif