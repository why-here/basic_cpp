// void pointers
// void 指针可以指向任意类型的数据，可以是整数，浮点数甚至是字符串。
// 唯一的限制是被指向的数值不可以被直接引用（×），因为它的长度是不定的。
// 因此需要使用类型转换或者赋值操作。

#include <iostream>
using namespace std;

void increase (void* data, int type) {
  switch (type) {
    case sizeof(char) : (*((char*) data))++; break;
	case sizeof(short): (*((short*)data))++; break;
	case sizeof(long) : (*((long*) data))++; break;
  }
}

int main() {
  char a = 5;
  short b = 9;
  long c = 12;
  increase(&a, sizeof(char));
  increase(&b, sizeof(short));
  increase(&c, sizeof(long));
  cout<<(int)a<<", "<<b<<", "<<c<<endl;

  return 0;
}

