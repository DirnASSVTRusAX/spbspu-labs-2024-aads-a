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
  std::forward_list< float > list;
  List< float > biList;
  std::deque< float > deque;
}
