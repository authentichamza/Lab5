#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Stack{
private:
  vector<string> n;
public:
  Stack();
  bool empty()
  {
    return n.empty();
  }
  string top(){
    return n.back();
  }
  void push(string str)
  {
   n.push_back(str);
  }
  void pop(){
   n.pop_back();
  }
};
int main(){
  Stack s1;
  string add;
  char info;
  cout<<"a if u are adding"<<endl;
  cout<<"r if u want to remove"<<endl;
  cin >>info;
  if(info=='a'){
    if(s1.empty()==1){
    cin>>add;
    s1.push(add);
    s1.top();
  }
}
  else if(info=='r'){
    s1.pop();
    s1.top();
}
  return 0;
}
