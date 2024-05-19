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

  size_t size = std::stoull(argv[3]);
  if (size == 0)
  {
    std::cerr << "Error: Wrong size parameter" << '\n';
    return 1;
  }

  List< int > list;
  for (size_t i = 0; i != size; ++i)
  {
    list.push_back(std::rand());
  }
  for (auto i = list.cbegin(); i != list.cend(); ++i)
  {
    std::cout << *i;
  }

  return 0;
}
