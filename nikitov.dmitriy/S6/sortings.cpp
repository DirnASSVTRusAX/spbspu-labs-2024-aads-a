#include "sortings.hpp"

template< class BiIterator, class Compare >
void nikitov::oddEvenSort(BiIterator begin, BiIterator end, Compare cmp)
{
  {
    bool isOdd = true;
    bool isSorted = false;
    while (!isSorted || isOdd)
    {
      BiIterator first = begin;
      BiIterator second = begin;
      ++second;
      if (!isOdd)
      {
        ++first;
        ++second;
      }
      isOdd = !isOdd;

      isSorted = true;
      while (second != end)
      {
        if (!cmp(*first, *second))
        {
          isSorted = false;
          std::swap(*first, *second);
        }
        ++first;
        ++second;
      }
    }
  }
}