#include <string>
#include <forward_list>
#include <iostream>
using std::string;
using std::forward_list;
using std::cout;
using std::endl;

void insert_behind_str(forward_list<string>& flst, string& str1, string& str2)
{
  auto iter = flst.begin(), prev = flst.before_begin();
  while (iter != flst.cend()) {
    if (*iter == str1) {
      flst.insert_after(iter, str2);
      return;
    }
    prev = iter;
    ++iter;
  }
  flst.insert_after(prev, str2);
}

int main() {
  forward_list<string> flst = {"a", "b", "c", "d", "e" };
  string str1 = "abc";
  string str2 = "kkk";

  insert_behind_str(flst, str1, str2);
  for (auto e: flst)
    cout << e << " ";
  cout << endl;
  return 0;
}
