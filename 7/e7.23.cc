#include <iostream>
#include <string>
#include <vector>
using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::istream;
using std::ostream;

class Screen {
private:
  unsigned hight = 0;
  unsigned width = 0;
  unsigned cursor = 0;
  string content;
public:
  Screen() = default;
  Screen(unsigned h, unsigned w, char c) : hight(h), width(w), content(h * w, c) { }
}
