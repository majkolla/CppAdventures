#include <iostream>

using namespace std;

template<size_t N>
int factorial()
{
    unsigned long long answer{};
    for (unsigned int i{N}; i > 1; i--)
    {
        answer *= i; 
    }
    return answer;
}

int main()
{
    cout << factorial<0>() << endl;
    cout << factorial<1>() << endl;
    cout << factorial<5>() << endl;
    cout << factorial<20>() << endl;
}