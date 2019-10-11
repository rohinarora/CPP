// creating maps of your own types

// to use unordered set; need to create your own hash and == operator
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <map>
#include <set>
using namespace std;

struct Point {
  int x, y;
};

bool operator<(const Point & lhs, const Point & rhs) {
  if (lhs.x < rhs.x) return true;
  if (lhs.x > rhs.x) return false;
  if (lhs.y < rhs.y) return true;
  if (lhs.y > rhs.y) return false;
  return false;
}
// can use mutiple "operator<"" definations for Point and then choose which to call when you actually use the set
int main() {
  set<Point> s;

  s.insert({1, 2});
  s.insert({2, 2});
  s.insert({1, 2});

  for (auto it = s.begin(); it != s.end(); ++ it) {
    cout << it->x << "," << it->y << endl;
  }
}
