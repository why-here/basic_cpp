// i/o example

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  int i;
  cout<<"Enter an integer value:";
  cin >> i; // 回车后才处理
  cout<<endl<<"your number is:"<<i<<endl;

  string mystr;
  cout<<"Enter an string:";
  cin >> mystr; // 空格后处理，空格以外的内容给下一个 cin
  cout<<"Your string is:"<<mystr<<endl;

  cout<<"Enter one line content:";
  getline(cin, mystr);  // 读取一行
  cout<<"Your line is:"<<mystr<<endl;

  cout<<"Enter a number:";
  getline(cin, mystr);
  stringstream(mystr) >> i;
  cout<<i<<endl;

  return 0;
}

