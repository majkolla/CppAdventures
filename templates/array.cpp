#include<iostream>
#include<initializer_list>

template<typename T, size_t size>
class myarray
{
    // constructor use the built in myarray 
    // some functions: push, pop, change the value 

private:
    T data[size]; // initialize the myarray 

public: 
    // some operator functions like: +, * 
    // regular methods like: size, length, pop, push

    myarray()
    {
        for (size_t i = 0; i < size; ++i)
        {
            data[i] = T(); // default value for arbitrary type T
        }
    }
    myarray(std::initializer_list<T> list) {
        size_t i = 0;
        for (T value : list) {
            if (i < size)
                data[i++] = value;
        }
    }

    size_t length() const 
    {
        return size; 
    }

    void print() const 
    {
        for(size_t i = 0; i < size; i++)
        {
            std::cout << data[i] << " ";
        }
    
    std::cout << std::endl; 
    }

    myarray operator+(const myarray& other) const
    {
        myarray temp;
        for (size_t i = 0; i < size; i++)
        {
            temp.data[i] = data[i] + other.data[i];
        }
        return temp;
    }
    T& operator[](size_t index) 
    {
        return data[index];
    }
}; 


int main()
{ 
    myarray<int, 5> hej{}; 
    myarray<int, 5> arr{}; 

    for (unsigned int i =0; i < 5; i++)
    {
        hej[i] = i; 
        arr[i] = i;  
    }
    myarray<int, 5> result = arr + hej;
    result.print();

    return 0; 
}


