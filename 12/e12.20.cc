#include <vector>
using std::vector;
#include <string>
using std::string;
#include <memory>
using std::shared_ptr;
using std::weak_ptr;
using std::unique_ptr;
using std::make_shared;
#include <initializer_list>
using std::initializer_list;
#include <stdexcept>
using std::out_of_range;
using std::runtime_error;
#include <cstddef>
using std::size_t;
#include <fstream>
using std::ifstream;
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class StrBlob;
class StrBlobPtr {
public:
  StrBlobPtr(): curr(0) { }
  StrBlobPtr(StrBlob&, size_t);
  string& deref() const;
  StrBlobPtr& incr();
private:
  shared_ptr<vector<string>> check(size_t, const string&) const;
  weak_ptr<vector<string>> wptr;
  size_t curr;
};

class StrBlob {
  friend class StrBlobPtr;
public:
  typedef vector<string>::size_type size_type;
  StrBlob();
  explicit StrBlob(initializer_list<string> il);
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }
  void push_back(const string &t) { data->push_back(t); }
  void pop_back();
  string& front();
  const string &front() const;
  const string &back() const;
  string& back();
private:
  shared_ptr<vector<string>> data;
  void check(size_type i, const string &msg) const;
  StrBlobPtr begin();
  StrBlobPtr end();
};
StrBlobPtr::StrBlobPtr(StrBlob& a, size_t sz=0): wptr(a.data), curr(sz) { }
inline StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
inline StrBlobPtr StrBlob::end() { auto ret = StrBlobPtr(*this, data->size());
    return ret;}


StrBlob::StrBlob(): data(make_shared<vector<string>>()) { }
StrBlob::StrBlob(initializer_list<string> il):
  data(make_shared<vector<string>>(il)) { }

void StrBlob::check(size_type i, const string &msg) const
{
  if (i >= data->size())
    throw out_of_range(msg);
}

string& StrBlob::front()
{
  check(0, "front on empty StrBlob");
  return data->front();
}

string& StrBlob::back()
{
  check(0, "back on empty StrBlob");
  return data->back();
}

const string &StrBlob::front () const
{
  check(0, "front on empty StrBlob");
  return data->front();
}

const string &StrBlob::back() const
{
  check(0, "back on empty StrBlob");
  return data->back();
}

void StrBlob::pop_back()
{
  check(0, "pop_back on empty StrBlob");
  data->pop_back();
}



shared_ptr<vector<string> >
StrBlobPtr::check(size_t i, const string &msg) const
{
  auto ret = wptr.lock();
  if (!ret)
    throw runtime_error("unbound StrBlobPtr");
  if (i >= ret->size())
    throw out_of_range(msg);
  return ret;
}

string& StrBlobPtr::deref() const
{
  auto p = check(curr, "dereference past end");
  return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
  check(curr, "increment past end of StrBlobPtr");
  ++curr;
  return *this;
}

int main(int argc, char *argv[]) {
  if (argc < 2)
    return -1;

  ifstream infile(argv[1]);
  string s;
  StrBlob flines;
  while (getline(infile, s)) {
    flines.push_back(s);
  }
  StrBlobPtr p(flines);
  for (decltype(flines.size()) i = 0; i != flines.size(); ++i) {
    cout << p.deref() << endl;
    p.incr();
  }
  return 0;
}
