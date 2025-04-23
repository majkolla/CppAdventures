#include <vector>
#include <cassert>


template<typename T>
class Stack {

    private: 
    std::vector<T> elements; 

    public: 

    void push(T const& element)
    void pop();
    T const& top() const; 
    bool empty() const
    {
        return elements.empty(); 
    }
}; 