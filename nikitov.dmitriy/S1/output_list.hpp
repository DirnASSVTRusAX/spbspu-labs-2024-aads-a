#ifndef OUTPUT_LIST_HPP
#define OUTPUT_LIST_HPP

#include <fstream>
#include "list.hpp"

namespace nikitov
{
  void outputList(List< std::pair< std::string, List< size_t > > >& pairsList, std::ostream& output);
}
#endif