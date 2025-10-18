#include <bits/stdc++.h>
using namespace std;
int main() {
  deque<string> car={"Tesla","Ford","BMW"};
  cout<<"Access with index:\n";
  cout<<car[0]<<"\n";
  car[2]="BB";
  cout<<car[2]<<"\n";

  cout<<"Print all the element:";
  
  // for(string carss:car)
  // {
  //   cout<<carss<<" ";

  // }

  // while (!car.empty())
  // {
  //   cout<<car.front()<<" ";
  //   car.pop_front();
  //   /* code */
  // }

  for(int i=0;i<car.size();i++)
  {
    cout<<car[i]<<" ";
  }
  



  return 0;
}