/*
 * main.cpp
 * Author: kamdem
 */

#include <iostream>
using namespace std;

template <class T>
bool ansisupported (T x) { return true; }

int test1() {
  if (ansisupported(0)) cout << "ANSI OK yeah";
  return 0;
}

int main(){
	cout << "hello world!" << endl;
	//with c++ 11 features
	/*int array [] = {11, 22, 33, 44, 55};
	for (auto i : array)
		cout << "element: " << i << endl;*/
	test1();
	return 0;
}
