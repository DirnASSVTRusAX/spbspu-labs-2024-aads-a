#ifndef SORTINGS_HPP
#define SORTINGS_HPP

#include <utility>

namespace nikitov
{
  template< class BiIterator, class Compare >
  void oddEvenSort(BiIterator begin, BiIterator end, Compare cmp);
}
#endif