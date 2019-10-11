#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
using namespace std;

int main() {
  vector<int> c = { 1, 2, 3, 4, 5 };

  auto it2 = c.begin();
  ++ it2;
  -- it2;
  it2 = it2 + 2;
  cout << *it2 << endl;

  for (auto it = c.begin(); it != c.end(); ++ it) {
    cout << *it << " ";
  }
  cout << endl;
  for (const auto & e: c) { // why does this have to be const auto?
    cout << e << " ";
  }
  cout << endl;
}
