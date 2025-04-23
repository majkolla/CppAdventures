#include<iostream>



template <unsigned int long long N> 
unsigned int long long factorial()
{
    return N * factorial<N-1>();
} 

template<>
unsigned int long long factorial<0>()
{
    return 1; 
}


int main()
{
    std::cout << factorial<0>() << std::endl; 
    std::cout << factorial<1>() << std::endl; 
    std::cout << factorial<5>() << std::endl; 
    std::cout << factorial<20>() << std::endl;
    std::cout << "HELLO" << std::endl; 
    return 0; 
}