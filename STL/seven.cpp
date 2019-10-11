#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <map>
using namespace std;

int main() {
map<string, string> m =
{
  { "mario", "red" },
  { "luigi", "green" }
};


for (auto it=m.begin(); it!=m.end();++it){
  cout<<(*it).first<<" "<<(*it).second<<" "<<endl; //maps exist in pairs.
}



//pair<string, string> p = make_pair("hello", "there");

m["wario"] = "purple"; //makes entry in the map if there isn't any
cout << m["wario"] << endl;


//another syntax
m.insert(make_pair("wario", "purple"));
cout << m["wario"] << endl;

for (auto it = m.begin(); it != m.end(); ++ it) {
  cout << it->first << " " << it->second << endl;
}

//to just search in map-



auto it = m.find("waluigi");
if (it != m.end()) {
  cout << it->second << endl;
} else {
  cout << "not found" << endl;
}

}
