
#ifndef EX00_HPP_
#define EX00_HPP_

template <typename T>
void swap(T &a, T &b)
{
  T c;
  c = a;
  a = b;
  b = c;
}

template<typename T>
T min(T a, T b)
{
  if(a < b) 
    return a;
  else
    return b;
}

template<typename T>
T max(T a, T b)
{
  if(a > b) 
    return a;
  else
    return b;
}

template<typename T>
T add(T a, T b)
{
  T c;
  c = a + b;
  return c;
}

#endif
