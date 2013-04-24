1 void f();
2 void f(int);
3 void f(int, int);
4 void f(double, double = 3.14);

f(2.56, 42)
viable: 3 4
ambiguous

f(42)
viable: 2 4
2

f(42, 0)
viable:  3 4
3

f(2.56, 3.14)
viable: 3 4
best: 4
