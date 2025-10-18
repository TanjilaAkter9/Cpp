//LIFO
#include <bits/stdc++.h>
using namespace std;
int main() {
  stack<string> cars;
  cars.push("Tesla");
  cars.push("Volvo");
  cars.push("Ford");
  cars.push("Mustang");
  
  cout<<"Top element:"<<cars.top()<<"\n";

  //change the top element
  cars.top()="BMW";

  cout<<"The stack is empty:"<<cars.empty();
  cout<<"\n";
  
  cout<<"Size:"<<cars.size()<<"\n";
  while (!cars.empty())
  {
    cout<<cars.top()<<" ";
    cars.pop();
  }
 
  



  return 0;
}