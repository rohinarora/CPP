/*
Write a function that takes a (const reference to a) list, and uses iterators to print out the elements of the list in forward and backward order.

Hint: begin ... end; rbegin ...

Optional challenge: try without using auto
*/

#include <iostream>
#include <list>
using namespace std;

void print_forward_backward(const list<int> & lst) {

    for (auto it = lst.begin(); it != lst.end(); ++ it) {
    cout << *it << " ";
  }
    cout<<endl;
    for (auto it = lst.rbegin(); it != lst.rend(); ++ it) {
    cout << *it << " ";
  }

  cout<<endl;
    for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++ it) {
    cout << *it << " ";
  }
    cout<<endl;
    for (list<int>::const_reverse_iterator it = lst.rbegin(); it != lst.rend(); ++ it) {
    cout << *it << " ";
  }

}

int main() {
  list<int> test_list = { 1, 2, 3, 4, 5 };
  print_forward_backward(test_list);
  // forward: 1 2 3 4 5
  // backward: 5 4 3 2 1
}
