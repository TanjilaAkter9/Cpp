//FIFO
#include <bits/stdc++.h>
using namespace std;
int main() {
  queue<string> car;
  car.push("Volvo");
  car.push("Ford");
  car.push("Tesla");

  car.front()="TT";
  car.back()="BB";

  cout<<car.front()<<"\n";
  cout<<car.back()<<"\n";
  cout<<"Size:"<<car.size()<<"\n";

  queue<string> temp=car;

  while (!temp.empty())
  {
    cout<<temp.front()<<" ";
    temp.pop();
  }
  

  

  return 0;
}