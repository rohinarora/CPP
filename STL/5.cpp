#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
using namespace std;

int main() {
  vector<int> c = { 1, 2, 3, 4, 5 };

  for (auto it = c.begin(); it != c.end(); ++ it) {
    cout << *it << " ";
  }
  cout << endl;
  for (const auto & e: c) {
    cout << e << " ";
  }
  cout << endl;

  // insert at a specific location
  vector<int> c2 = { 7, 8, 9 };
  c2.insert(c2.begin() + 2, c.begin(), c.end());

  for (const auto & e: c2) {
    cout << e << " ";
  }
  cout << endl;

}
