#include <iostream>
#include <string>
using std::string;

int main() {
    int i = 0 ; double d = 0; const string *ps = nullptr; char *pc = nullptr; void *pv = nullptr;

    // pv = (void *)ps;
    pv = static_cast<void *>(const_cast<string *>(ps));

    // i = int(*pc);
    i = static_cast<int>(*pc);

    // pv = &d;
    pv = reinterpret_cast<void *>(&d);

    // pc = (char *) pv;
    pc = static_cast<char *>(pv);

    return 0;
}
