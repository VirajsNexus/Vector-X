#include "Vector.h"
#include <iostream>
#include <stdexcept>

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
    if(index < 0 || index >= size)
    {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

void Vector::pop_back()
{
    if(size > 0)
    {
        size--;
    }
    else
    {
        throw std::out_of_range("Vector is empty");
    }
}


int Vector::front()
{
    if(size > 0)
    {
        return data[0];
    }
    throw std::out_of_range("Vector is empty");
}

int Vector::back()
{
    if(size > 0)
    {
        return data[size - 1];
    }
    throw std::out_of_range("Vector is empty");
}

bool Vector::empty()
{
    return size == 0;
}

int &Vector::at(int index)
{
    if(index < 0 || index >= size)
    {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

void Vector::print()
{
    for(int i = 0; i < size; i++)
    {
        std::cout<< " | " << data[i] << " ";
    }
    std::cout << std::endl;
}

void Vector::insert(int index, int value)
{
    if(index < 0 || index > size)
    {
        throw std::out_of_range("Index out of bounds");
    }

    if(size == capacity)
    {
        resize();
    }

    //shifting elements to the right
    for(int i = size; i > index; i--)
    {
        data[i] = data[i - 1];
    }
    data[index] = value;
    size++;
}

void Vector::erase(int index)
{
    if(index < 0 || index >= size)
    {
        throw std::out_of_range("Index out of range");
    }

    for(int i = index; i < size - 1; i++)
    {
        data[i] = data[i + 1];
    }

    size--;
}