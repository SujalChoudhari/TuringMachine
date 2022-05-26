#include "TCM.hpp"
#include <fstream>
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

int main() {
  string filename("test.tcm");
  vector<char> bytes;
  bool cond = true;
  char byte = 0;
  TCM tcm;

  ifstream input_file(filename);
  if (!input_file.is_open()) {
    cerr << "Could not open the file - '" << filename << "'" << endl;
    return EXIT_FAILURE;
  }

  while (input_file.get(byte)) {
    bytes.push_back(byte);
  }
  input_file.close();
  for (const auto &i : bytes) {
    if (i == '/')
      cond = true;
    if (!cond)
      continue;
    if (i == '<')
      tcm.left();
    else if (i == '>')
      tcm.right();
    else if (i == '^')
      tcm.flip();
    else if (i == '.')
      tcm.read();
    else if (i == '?') {
      if (tcm.iif())
        cond = true;
      else
        cond = false;
    }
  }
  return EXIT_SUCCESS;
}