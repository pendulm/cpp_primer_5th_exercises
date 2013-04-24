class NoConstructor {
  int m;
};

int main() {
  NoConstructor testa; //NoConstructor doesnt have any constructor, so a wrong
  NoConstructor testb(); //this define a function testb, b wrong
  // c yes, but programmer should consider if a class doesnt have a meaningful default
  // d wrong. if a class didnt have any constructor defined, compiler try to generate one, but this require all members have their default value or constructors.
  return 0;
}
