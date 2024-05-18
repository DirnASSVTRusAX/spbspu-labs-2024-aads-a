#include <iostream>
#include <forward_list>
#include <deque>
#include <algorithm>
#include <list.hpp>

int main(int argc, char* argv[])
{
  using namespace nikitov;
  if (argc != 4)
  {
    std::cerr << "Error: Wrong input parameters" << '\n';
    return 1;
  }

  size_t size = {};
  try
  {
    size = std::stoull(argv[3]);
  }
  catch (const std::exception&)
  {
    std::cerr << "Error: Wrong size parameter" << '\n';
    return 1;
  }

  std::string type = argv[2];

  std::forward_list< int > firstList;

  if (type == "ints")
  {
    for (size_t i = 0; i != size; ++i)
    {
      float num = rand();
      firstList.push_front(num);
    }
  }
  else if (type == "floats")
  {
    //for (size_t i = 0; i != size; ++i)
    //{
      //float num = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX));
      //firstList.push_front(num);
    //}
  }
  else
  {
    std::cerr << "Error: Wrong type parameter" << '\n';
    return 1;
  }

  firstList.reverse();
  std::forward_list< int > secondList(firstList);
  List< int > firstBiList;
  for (auto i = firstList.cbegin(); i != firstList.cend(); ++i)
  {
    firstBiList.push_back(*i);
  }
  List< int > secondBiList(firstBiList);
  std::deque< int > firstDeque;
  for (auto i = firstList.cbegin(); i != firstList.cend(); ++i)
  {
    firstDeque.push_back(*i);
  }
  std::deque< int > secondDeque(firstDeque);

  for (auto i = firstList.cbegin(); i != firstList.cend(); ++i)
  {
    std::cout << (*i) << ' ';
  }
  std::cout << '\n';

  firstList.sort();
  for (auto i = firstList.cbegin(); i != firstList.cend(); ++i)
  {
    std::cout << (*i) << ' ';
  }
  std::cout << '\n';

  secondList.sort();
  for (auto i = secondList.cbegin(); i != secondList.cend(); ++i)
  {
    std::cout << (*i) << ' ';
  }
  std::cout << '\n';

  firstBiList.sort(std::greater< int >());
  for (auto i = firstBiList.cbegin(); i != firstBiList.cend(); ++i)
  {
    std::cout << (*i) << ' ';
  }
  std::cout << '\n';

  secondBiList.sort(std::greater< int >());
  for (auto i = secondBiList.cbegin(); i != secondBiList.cend(); ++i)
  {
    std::cout << (*i) << ' ';
  }
  std::cout << '\n';

  std::sort(firstDeque.begin(), firstDeque.end());
  for (auto i = firstDeque.cbegin(); i != firstDeque.cend(); ++i)
  {
    std::cout << (*i) << ' ';
  }
  std::cout << '\n';

  std::sort(secondDeque.begin(), secondDeque.end());
  for (auto i = secondDeque.cbegin(); i != secondDeque.cend(); ++i)
  {
    std::cout << (*i) << ' ';
  }
  std::cout << '\n';

  return 0;
}
