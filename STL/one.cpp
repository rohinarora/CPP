#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> c = { 1, 2, 3, 4, 5 };

  vector<int>::iterator it = c.begin();
  ++ it;
  ++ it;
  cout << *it << endl; // deference
  //cout << it << endl; doesn't work

}
