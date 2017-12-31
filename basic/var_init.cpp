// 变量初始化

#include <iostream>
using namespace std;

int main() {
  int a = 5; 
  int b(2); // 调用构造函数进行初始化
  int result; // 不确定初始值

  a = a + 3;
  result = a - b;
  cout<<result<<endl;

  return 0;
}

