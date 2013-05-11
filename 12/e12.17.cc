#include <memory>
using std::unique_ptr;
typedef unique_ptr<int> IntP;

int main() {
int ix = 1024, *pi = &ix, *pi2 = new int (2048);


IntP p0(ix); // Error
IntP p1(pi); // no syntax error, but will cause delete
IntP p2(pi2); // Valid, but pi2 may dangling
IntP p4(new int(2048)); // valid
IntP p5(p2.get()); //cause double delete
 return 0;
}
