#include<iostream>
#include<string>

int main()
{
    std::string str = "hej"; 
    std::string str1 = "abs";
    for (unsigned int i{0}; i < str1.length(); i++)
    {
        std::string s(1,str1[i]);

        std::cout << str.append(s)  << "\n"; 
    }
    return 0;
}