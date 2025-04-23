#include<iostream>


// get max temp
template<typename T>
T getmax(T a, T b)
{
    return a >= b ? a : b; 
}

// swap two different elements

template<typename T>
void swap(T &a, T &b)
{
    // Swapping logic, here we can maybe use some binary operator 
    // or we can use a temp variable 
    T temp{a}; 
    a = b; 
    b = temp; 
} 

template<typename T>
void print(T var)
{
    std::cout << var; 
}

template<typename T>
T multiply(T a, T b)
{
    return a * b;
}

template<>
std::string multiply(std::string str1, std::string str2)
{
    // hej * hej = hheejj
    // hej * school = hsecj hool
    // school * hej = shcehjool

    int max{};
    bool first{false}; 
    if (str1.length() > str2.length())
    {
        max = str2.length();
        first = true; 
    }
    else
    {
        max = str1.length(); 

    }

    std::string temp; 

    for (unsigned int i = 0; i < max; i++ )
    {
        
        std::string s1(1,str1[i]); 
        std::string s2(1, str2[i]); 

        temp.append(s1); 
        temp.append(s2); 
    }

    
    if(first)
    {
        for(unsigned int i = max; i < str1.length(); i ++)
        {
            std::string s(1, str1[i]);
            temp.append(s);
        }
    }
    else
    {
        for(unsigned int i = max; i < str2.length(); i ++)
        {
            std::string s(1, str2[i]);
            temp.append(s);
        }
    }
    return temp;
}





int main()
{


    int A = 4; 
    int B = 2; 

    int C{};
    
    C = multiply(A, B); 
    std::cout << "C: " << C << std::endl; 

    std::string str1 = "hej"; 
    std::string str2 = "school"; 

    std::cout << multiply(str1, str2) << std::endl; 



    return 1; 
}


