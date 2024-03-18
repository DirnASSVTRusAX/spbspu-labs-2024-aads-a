#ifndef QUEUE_HPP
#define QUEUE_HPP

namespace nikitov
{
  template< class T >
  class Queue
  {
  public:
    void push(const T& value);
    T& drop();
  };
}
#endif