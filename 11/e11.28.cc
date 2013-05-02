#include <map>
using std::map;
#include <string>
using std::string;
#include <vector>
using std::vector;

int main() {
  map<string, vector<int>> msv;
  map<string, vector<int>>::iterator iter = msv.find(string("sss"));
  return 0;
}
