/*
Set:
1. Organize in ascending order
2. Uses insert,erase,clear ,empty
3. No index system
4. Have range based loop

*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  cout<<"Unique elements:"<<"\n";
  //Duplicate wont be printing
  set<string> car={"Volvo","Mazda","Ford","BMW","BMW"};
  for(string carss: car)
  {
    cout<<carss<<" ";
  }
  cout<<"\n";

  cout<<"Ascending:"<<"\n";
  set<string> car1={"Volvo","Mazda","Ford","BMW"};
  for(string carss: car1)
  {
    cout<<carss<<" ";
  }
  cout<<"\n";

  cout<<"Descending:"<<"\n";
  set<string, greater<string>> car2={"Volvo","Mazda","Ford","BMW"};
  for(string carss: car2)
  {
    cout<<carss<<" ";
  }
  cout<<"\n";

  cout<<"Ascending:"<<"\n";
  set<int> num={6,5,4,3,1};
  for(int numss : num)
  {
    cout<<numss<<" ";
  }
  cout<<"\n";

  cout<<"Descending:"<<"\n";
  set<int, greater<int>> num2={6,5,4,3,1};
  for(int numss : num2)
  {
    cout<<numss<<" ";
  }
  cout<<"\n";

  cout<<"Inset and erase\n";
  set<int> alpha={5,4,3,2,1};
  alpha.erase(1);
  alpha.insert(6);
  alpha.insert(7);
  for(int num:alpha)
  {
    cout<<num<<" ";
  }
  cout<<"\n";

  cout<<"Clear and empty\n";
  set<int> emp={1,2,3,4,5};
  cout<<emp.size()<<"\n";
  emp.clear();
  cout<<emp.empty()<<"\n";
  return 0;
}