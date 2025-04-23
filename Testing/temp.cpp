#include<iostream>

template <typename T>
void fun(T&)
{
  std::cout << 1;
}

template <>
void fun(int const&)
{
  std::cout << 2;
}

template <typename T>
void fun(T const&)
{
  std::cout << 3;
}

int main()
{
  double       x{};
  int const    y{};
  double const z{};

  fun(x);
  fun(y);
  fun(z);
}
