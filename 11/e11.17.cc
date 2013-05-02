#include <set>
using std::multiset;
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <algorithm>
using std::copy;
#include <iterator>
using std::inserter;
using std::back_inserter;

multiset<string> c;
vector<string> v;

// function cant be called outside?
/*copy(v.begin(), v.end(), back_inserter(c));
copy(c.begin(), c.end(), inserter(v, v.end()));
copy(c.begin(), c.end(), back_inserter(v));
*/

int main() {
  copy(v.begin(), v.end(), inserter(c, c.end()));
  //  copy(v.begin(), v.end(), back_inserter(c));
  copy(c.begin(), c.end(), inserter(v, v.end()));
  copy(c.begin(), c.end(), back_inserter(v));
  return 0;
}
