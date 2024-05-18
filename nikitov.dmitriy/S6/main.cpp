#include <iostream>
#include <forward_list>
#include <deque>
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
    std::cerr << "Error: Wrong size" << '\n';
    return 1;
  }

  std::forward_list< float > firstList;
  std::forward_list< float > secondList;
  List< float > firstBiList;
  List< float > secondBiList;
  std::deque< float > firstDeque;
  std::deque< float > secondDeque;

  if (argv[2] == "ints")
  {

  }
  else if (argv[2] == "floats")
  {

  }
  else
  {
    std::cerr << "Error: Wrong type parameter" << '\n';
    return 1;
  }

  return 0;
}
