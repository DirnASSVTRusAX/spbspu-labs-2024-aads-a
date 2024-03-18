#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <cstddef>
#include "stack.hpp"

namespace nikitov
{
  template< class T >
  class Queue
  {
  public:
    Queue();
    ~Queue() = default;

    void push(const T& value);
    T& drop();

  private:
    void move();
    Stack< T > data1_;
    Stack< T > data2_;
  };

  template< class T >
  Queue< T >::Queue():
    data1_(),
    data2_()
  {}

  template< class T >
  void Queue< T >::push(const T& value)
  {
    data1_.push(value);
  }

  template< class T >
  T& Queue< T >::drop()
  {
    if (data2_.empty())
    {
      move();
    }
    return data2_.drop();
  }

  template< class T >
  void Queue< T >::move()
  {
    while (!data1_.empty())
    {
      data2_.push(data1_.drop());
    }
  }
}
#endif