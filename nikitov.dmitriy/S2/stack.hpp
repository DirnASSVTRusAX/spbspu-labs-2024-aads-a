#ifndef STACK_HPP
#define STACK_HPP

#include <cstddef>

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
    size_t size() const;
    bool empty() const;

  private:
    void resize();
    T* data_;
    size_t size_;
    size_t capacity_;
  };

  template< class T >
  Stack< T >::Stack():
    data_(new T[20]),
    size_(0),
    capacity_(20)
  {}

  template< class T >
  Stack< T >::~Stack()
  {
    delete[] data_;
  }

  template< class T >
  void Stack< T >::push(const T& value)
  {
    if (size_ == capacity_)
    {
      resize();
    }
    data_[size_] = value;
    ++size_;
  }

  template< class T >
  T& Stack< T >::drop()
  {
    --size_;
    return data_[size_];
  }

  template< class T >
  size_t Stack< T >::size() const
  {
    return size_;
  }

  template< class T >
  bool Stack< T >::empty() const
  {
    return !size();
  }
  template< class T >
  void Stack< T >::resize()
  {
    capacity_ += 20;
    T* newData = new T[capacity_];
    for (size_t i = 0; i != size_; ++i)
    {
      newData[i] = data_[i];
    }
    delete[] data_;
    data_ = newData;
  }
}
#endif