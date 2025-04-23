#include <iostream>
#include <string>

template<typename T>
T max (T a, T b)
{
    if (a < b)
    {
        return b; 
    }
    else return a;
}

template<typename T1, typename T2>
constexpr auto max (T1 a, T2 b)
{
    return b < a ? a : b; 
}


int main()
{

    auto b =  ::max<int>(2,1);

    return 0; 
}







