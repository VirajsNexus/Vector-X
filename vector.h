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
        void pop_back();

        int getSize();
        int getCapacity();

        int front();
        int back();
        bool empty();
        
        int& operator[](int index);

        void clear()
        {
            size = 0;
        }

        int& at(int index);
        void print();

};

#endif