#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> car={"Volvo","Ford","Mustang"};

    // vector<string> :: iterator it;
    // for(it=car.begin();it!=car.end();++it)
    // {
    //     cout<<*it<<"\n";
    // }

    //or
    for(auto it=car.begin();it!=car.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";

    // Create a vector called cars that will store strings
  vector<string> cars={"Volvo","BMW","Ford"};
  for(auto it=cars.begin();it!=cars.end();)
  {
    if(*it=="BMW")
    {
      it=cars.erase(it);
    }
    else it++;
  }
  
  for(string &car:cars)
  {
    cout<<car<<" ";
  }
  cout<<"\n";

  //Iterate in reverse
  for(auto it=car.rbegin();it!=car.rend();++it)
  {
    cout<<*it<<" ";
  }
  cout<<"\n";

  //List
  list<string> car1={"Volvo","Ford","Mustang"};
  for(auto it=car1.begin();it!=car1.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<"\n";

  //set
  set<string> car2={"Volvo","Ford","Mustang"};
  for(auto it=car2.begin();it!=car2.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<"\n";

  //deque
  deque<string> car3={"Volvo","Ford","Mustang"};
  for(auto it=car3.begin();it!=car3.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<"\n";

  //map
  map<string,int> car4={{"Volvo",1},{"Ford",2}};
  for(auto it=car4.begin();it!=car4.end();it++)
  {
    cout<<it->first<<" is: "<<it->second<<"\n";
  }


  
  return 0;
}
