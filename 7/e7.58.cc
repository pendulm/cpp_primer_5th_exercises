#include <vector>
using std::vector;
class Example {
public:
  static double rate;
  static const int vecSize = 20;
  static vector<double> vecclass Screen {
  public:
    // bkground refers to the static member
    // declared later in the class definition
    Screen& clear(char = bkground);
  private:
    static const char bkground;
  };
};

double Example::rate;
vector<double> Example::vec(10);

int main() {
  return 0;
}
