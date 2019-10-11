#include <iostream>
#include <vector>
#include <list>
using namespace std;

// make reverse iterator work

int main() {
  vector<int> c = { 1, 2, 3, 4, 5 };

  for (vector<int>::iterator it = c.begin(); it != c.end(); ++ it) {
    cout << *it << " ";
  }
  cout << endl;
  for (const auto & e: c) {
    cout << e << " ";
  }
  cout << endl;
  for (auto it = c.begin(); it != c.end(); ++ it) {
    cout << *it << " ";
  }
  cout << endl;
  list<int> c1 = { 1, 2, 3, 4, 5 }; //doubly LL
  for (auto it = c1.begin(); it != c1.end(); ++ it) {
    cout << *it << " ";
  }
}
