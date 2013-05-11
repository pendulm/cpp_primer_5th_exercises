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
class ConstStrBlobPtr {
public:
  ConstStrBlobPtr(): curr(0) { }
  ConstStrBlobPtr(const StrBlob&, size_t);
  string& deref() const;
  ConstStrBlobPtr& incr();
private:
  shared_ptr<vector<string>> check(size_t, const string&) const;
  weak_ptr<vector<string>> wptr;
  size_t curr;
};

class StrBlob {
  friend class ConstStrBlobPtr;
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
  ConstStrBlobPtr begin();
  ConstStrBlobPtr end();
};
ConstStrBlobPtr::ConstStrBlobPtr(const StrBlob &a, size_t sz=0): wptr(a.data), curr(sz) { }
inline ConstStrBlobPtr StrBlob::begin() { return ConstStrBlobPtr(*this); }
inline ConstStrBlobPtr StrBlob::end() { auto ret = ConstStrBlobPtr(*this, data->size());
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
ConstStrBlobPtr::check(size_t i, const string &msg) const
{
  auto ret = wptr.lock();
  if (!ret)
    throw runtime_error("unbound ConstStrBlobPtr");
  if (i >= ret->size())
    throw out_of_range(msg);
  return ret;
}

string& ConstStrBlobPtr::deref() const
{
  auto p = check(curr, "dereference past end");
  return (*p)[curr];
}

ConstStrBlobPtr& ConstStrBlobPtr::incr()
{
  check(curr, "increment past end of ConstStrBlobPtr");
  ++curr;
  return *this;
}

int main(int argc, char *argv[]) {
  const StrBlob flines({"aaa", "bbb", "ccc"});
  ConstStrBlobPtr p(flines);
  for (decltype(flines.size()) i = 0; i != flines.size(); ++i) {
    cout << p.deref() << endl;
    p.incr();
  }
  return 0;
}
