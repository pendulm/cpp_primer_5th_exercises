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

class Screen;
class Window_mgr {
private:
  // vector<Screen> vs = {Screen(5, 5, '*')};
  vector<Screen> vs;
public:
  using Index = vector<Screen>::size_type;
  void clear(Index i);
  Window_mgr();
};

class Screen {
    friend void Window_mgr::clear(Window_mgr::Index);
private:
  unsigned hight = 0;
  unsigned width = 0;
  unsigned cursor = 0;
  string content;
public:
  Screen() = default;
  Screen(unsigned h, unsigned w) : hight(h), width(w), content(h* w, ' ') { }
  Screen(unsigned h, unsigned w, char c) : hight(h), width(w), content(h * w, c) { }
  Screen& move(unsigned h, unsigned w) {
      cursor = h * width + w;
      return *this;
  }
  Screen& set(unsigned h, unsigned w, char c) {
      content[h*w] = c;
      return *this;
  }
  Screen& set(char c) {
      content[cursor] = c;
      return *this;
  }
  Screen& display(ostream& os) {
      os << content;
      return *this;
  }
  const Screen& display(ostream& os) const {
      os << content;
      return *this;
  }

};


void Window_mgr::clear(Window_mgr::Index i) {
    Screen &s = vs[i];
    s.content = string(s.hight * s.width, ' ');
}

Window_mgr::Window_mgr() : vs({Screen(5, 5, '*')}) {}

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    return 0;
}
