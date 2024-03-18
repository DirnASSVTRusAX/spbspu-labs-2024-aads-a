#ifndef STACK_HPP
#define STACK_HPP

namespace nikitov
{
  template< class T >
  class Stack
  {
  public:
    Stack();
    ~Stack();

    void push(const T& value);
    T& drop();
  private:
    T** data_;
    size_t size_;
    size_t capacity_;
  };

  template< class T >
  Stack< T >::Stack():
    data_(new T*[20]),
    size_(0),
    capacity_(20)
  {}

  template< class T >
  Stack< T >::~Stack()
  {
    delete[] data_;
  }
}
#endif