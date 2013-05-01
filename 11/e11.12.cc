#include <utility>
using std::pair;
using std::make_pair;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;

int main() {
  string first;
  int second;
  vector<pair<string, int> > vp;
  while (cin >> first >> second) {
    vp.push_back(make_pair(first, second));
  }
  return 0;
}
