#ifndef STACK_HPP
#define STACK_HPP

namespace nikitov
{
  template< class T >
  class Stack
  {
  public:
    void push(const T& value);
    T& drop();
  };
}
#endif