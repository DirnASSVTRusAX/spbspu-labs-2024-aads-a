#include <iostream>
#include <forward_list>
#include <deque>
#include <algorithm>
#include <list.hpp>
#include "sortings.hpp"
#include "iterators_functions.hpp"

int main(int argc, char* argv[])
{
  using namespace nikitov;
  if (argc != 4)
  {
    std::cerr << "Error: Wrong input parameters" << '\n';
    return 1;
  }

  size_t size = std::stoull(argv[3]);
  if (size == 0)
  {
    std::cerr << "Error: Wrong size parameter" << '\n';
    return 1;
  }

  std::string sorting = argv[1];
  std::string type = argv[2];
  if (type == "ints")
  {
    std::forward_list< int > fList;
    List< int > firstBiList;
    std::deque< int > firstDeque;
    for (size_t i = 0; i != size; ++i)
    {
      int value = std::rand();
      fList.push_front(value);
      firstBiList.push_back(value);
      firstDeque.push_back(value);
    }
    List< int > secondBiList = firstBiList;
    std::deque< int > secondDeque = firstDeque;
    std::deque< int > thirdDeque = firstDeque;

    printRange(fList.cbegin(), fList.cend(), std::cout);

    if (sorting == "ascending")
    {
      std::sort(fList.begin(), fList.end(), std::less< int >());
      oddEvenSort(firstBiList.begin(), firstBiList.end(), std::less< int >());
      secondBiList.sort(std::less< int >());
      oddEvenSort(firstDeque.begin(), firstDeque.end(), std::less< int >());
      QSort(firstDeque.begin(), firstDeque.end(), std::less< int >());
      std::sort(firstDeque.begin(), firstDeque.end(), std::less< int >());
    }
    else if (sorting == "descending")
    {
      std::sort(fList.begin(), fList.end(), std::greater< int >());
      oddEvenSort(firstBiList.begin(), firstBiList.end(), std::greater< int >());
      secondBiList.sort(std::greater< int >());
      oddEvenSort(firstDeque.begin(), firstDeque.end(), std::greater< int >());
      QSort(firstDeque.begin(), firstDeque.end(), std::greater< int >());
      std::sort(firstDeque.begin(), firstDeque.end(), std::greater< int >());
    }
    else
    {
      std::cerr << "Error: Wrong sorting parameter" << '\n';
      return 1;
    }
  }
  else if (type == "floats")
  {
    std::forward_list< float > fList;
    List< float > firstBiList;
    std::deque< float > firstDeque;
    for (size_t i = 0; i != size; ++i)
    {
      float value = std::rand();
      fList.push_front(value);
      firstBiList.push_back(value);
      firstDeque.push_back(value);
    }
    List< float > secondBiList = firstBiList;
    std::deque< float > secondDeque = firstDeque;
    std::deque< float > thirdDeque = firstDeque;

    printRange(fList.cbegin(), fList.cend(), std::cout);

    if (sorting == "ascending")
    {
      std::sort(fList.begin(), fList.end(), std::less< float >());
      oddEvenSort(firstBiList.begin(), firstBiList.end(), std::less< float >());
      secondBiList.sort(std::less< float >());
      oddEvenSort(firstDeque.begin(), firstDeque.end(), std::less< float >());
      QSort(firstDeque.begin(), firstDeque.end(), std::less< float >());
      std::sort(firstDeque.begin(), firstDeque.end(), std::less< float >());
    }
    else if (sorting == "descending")
    {
      std::sort(fList.begin(), fList.end(), std::greater< float >());
      oddEvenSort(firstBiList.begin(), firstBiList.end(), std::greater< float >());
      secondBiList.sort(std::greater< float >());
      oddEvenSort(firstDeque.begin(), firstDeque.end(), std::greater< float >());
      QSort(firstDeque.begin(), firstDeque.end(), std::greater< float >());
      std::sort(firstDeque.begin(), firstDeque.end(), std::greater< float >());
    }
    else
    {
      std::cerr << "Error: Wrong sorting parameter" << '\n';
      return 1;
    }
  }
  else
  {
    std::cerr << "Error: Wrong type parameter" << '\n';
    return 1;
  }

  return 0;
}