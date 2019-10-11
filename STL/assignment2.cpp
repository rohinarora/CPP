/*

Write a program that reads integers from stdin
until an error. It then prints the unique integers
entered (i.e. no duplicates) in increasing order.
Hint: use a set.


-> input a alphabet. thats the cin error case

*/


#include <stdio.h>
#include <iostream>
#include <set>
using namespace std;
int main(){
  int a;
  set<int> st;
  while (cin>>a){
    cout<<a<<endl;
    st.insert(a);
  }
  for (set<int>::iterator it1 = st.begin(); it1!=st.end();  ++it1){
    cout<<*it1<<endl;
  }

  for (auto x: st) {
cout << x << endl;
}
  return 0;
}
