#include "Vector.h"

Vector::Vector()
{
    data = nullptr;
    size = 0;
    capacity = 0;
}

Vector::~Vector()
{
    delete[] data;
}

void Vector::resize()
{
    if(capacity == 0)
    {
        capacity = 1;
    }
    else
    {
        capacity *= 2;
    }

    int* temp = new int[capacity];

    for(int i = 0; i < size; i++)
    {
        temp[i] = data[i];
    }

    delete[] data;
    data = temp;
}

void Vector::push_back(int value)
{
    if(size == capacity)
    {
        resize();
    }

    data[size] = value;
    size++;
}

int Vector::getSize()
{
    return size;
}

int Vector::getCapacity()
{
    return capacity;
}

int& Vector::operator[](int index)
{
    return data[index];
}