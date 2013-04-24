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
public:
  using pos = unsigned;
  Screen() = default;
  Screen(pos h, pos w) : hight(h), width(w), content(h* w, ' ') { }
  Screen(pos h, pos w, char c) : hight(h), width(w), content(h * w, c) { }
  Screen& move(pos h, pos w) {
      cursor = h * width + w;
      return *this;
  }
  Screen& set(pos h, pos w, char c) {
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
  pos size() const;

private:
  pos hight = 0;
  pos width = 0;
  pos cursor = 0;
  string content;
};


void Window_mgr::clear(Index i) {
    Screen &s = vs[i];
    s.content = string(s.hight * s.width, ' ');
}

Screen::pos Screen::size() const
{
    return hight * width;
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
