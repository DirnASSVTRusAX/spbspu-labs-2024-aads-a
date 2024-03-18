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
    Stack< T > data1_;
    Stack< T > data2_;
    size_t& size_;
    size_t& capacity_;
  };

  template< class T >
  Queue< T >::Queue():
    data1_(),
    data2_(),
    size_(data1_.size_),
    capacity_(data1_.capacity_)
  {}

  template< class T >
  void Queue< T >::push(const T& value)
  {
    data1_.push(value);
  }
}
#endif