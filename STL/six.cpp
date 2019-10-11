// group:

#include <iostream>
#include <list>
using namespace std;

void print_forward_backward(const list<int> & lst) {

    for (list<int>::const_iterator it = lst.rbegin(); it != lst.rend(); ++ it) {
    cout << *it << " ";
  }


}

int main() {
  list<int> test_list = { 1, 2, 3, 4, 5 };
  print_forward_backward(test_list);
  // forward: 1 2 3 4 5
  // backward: 5 4 3 2 1
}
