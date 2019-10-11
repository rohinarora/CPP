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


//(*it) is a pair object; with fields .first and .second

for (auto it=m.begin(); it!=m.end();++it){
  cout<<(*it).first<<" "<<(*it).second<<" "<<endl; //maps exist in pairs.
  //cout <<*it<<endl; //won't work
}

//pair<string, string> p = make_pair("hello", "there");

m["wario"] = "purple"; //makes entry in the map even if there isn't any
cout <<endl<<endl;
cout << m["wario"] << endl;
cout <<endl<<endl;


//another syntax
m.insert(make_pair("wario", "purpllle"));
cout << m["wario"] << endl;
cout <<endl<<endl;

m["wario"] = "purpllle";
cout << m["wario"] << endl;
cout <<endl<<endl;

for (auto it = m.begin(); it != m.end(); ++ it) {
  cout << it->first << " " << it->second << endl;
}
cout <<endl<<endl;
//to just search in map-

auto it = m.find("waluigi"); // if find is unsuccessful, it returns m.end()
if (it != m.end()) {
  cout << it->second << endl;
} else {
  cout << "not found" << endl;
}

}
