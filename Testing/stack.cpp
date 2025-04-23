#include <vector>
#include <cassert>
#include "stack.hpp"


// we can implement a stack architecture 
// by using the vector class implementation 

template<typename T>
void Stack<T>::push (T const& element)
{
    elements.push_back(element); 
}

template<typename T>
T const& Stack<T>::top() const 
{
    // return a copy of the last element
}

template<typename T>
void Stack<T>::pop()
{
    // remove last element and maybe return it?
    // if we return it we need a T reference 

}

