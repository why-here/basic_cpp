// Pointers to Functions
// 作用：把一个函数作为参数传递给另一个函数。
// 声明一个函数指针像声明一个函数原型一样，除了函数的名字需要被括在
// 括号内，并在前面加星号。

#include <iostream>
using namespace std;

int addition (int a, int b) {
  return (a + b);
}

int subtraction (int a, int b) {
  return (a - b);
}

int operation (int x, int y, int (*functocall)(int,int)) {
  int g;
  g = (*functocall)(x, y);
  return (g);
}

int main() {
  int m, n;
  
  int (* minus)(int, int) = subtraction;
  m = operation(7, 5, addition);
  n = operation(20, m, minus);
  cout<<n<<endl;

  return 0;
}

