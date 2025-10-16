#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> num={1,2,3,4,5};
  for(int car: num)
  {
    cout<<car<<" ";
  }

  cout<<"\n";
  cout<<"Front Num:"<<num.front();
  cout<<"\n";
  cout<<"Last Num:"<< num.back();
  cout<<"\n";
  cout<<num[0]<<"\n";
  cout<<num[2]<<"\n";

  num[0]=3333;
  cout<<"Change an element:"<<num[0]<<"\n";
  
  cout<<"Change an element using .at():"<<num.at(0)<<"\n";

  //Add an element
  vector<int> element={6,7,8};
  element.push_back(4444);
  for(int c:element)
  {
    cout<<c<<" ";
  }

  cout<<"\n";
  vector<string> word={"hello","hi","howdy"};
  for(string alpha:word)
  {
    cout<<alpha<<" ";
  }
  cout<<"\n";
  cout<<word[0]<<"\n";
  cout<<word[2]<<"\n";
  return 0;
}