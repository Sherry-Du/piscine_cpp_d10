#ifndef EX03_HPP_
#define EX03_HPP_

#include <iostream>

template<typename T, typename U>
void foreach(T* array, void (&func)(const T& elem), U size)
{
  int i = 0;
  while (size--)
    func(array[i++]);
}

template<typename T>
void print(T const& elem)
{
  std::cout << elem << std::endl;
}


#endif
