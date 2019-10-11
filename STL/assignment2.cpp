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
  return 0;
}
