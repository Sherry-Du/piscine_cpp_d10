#ifndef EX02_HPP_
#define EX02_HPP_

#include <iostream>

template<typename T>
T min(T a, T b)
{
  T c;
  std::cout << "template min" << std::endl;
  (a <= b) ? c = a : c = b;
  return c;
}

int min(int a, int b)
{
  int c;
  std::cout << "non-template min" << std::endl;
  (a <= b) ? c = a : c = b;
  return c;
}

template<typename T, typename U>
T templateMin(T *array, U size)
{
  T c;
  int i = 1;
  if (size < 1)
    return 0;
  c = array[0];
  while (--size)
    c = min<T>(c, array[i++]);
  return c;
}

int nonTemplateMin(int *array, int size)
{
  int c, i = 1;
  if (size < 1)
    return 0;
  c = array[0];
  while (--size)
    c = min(c, array[i++]);
  return c;  
}

#endif
