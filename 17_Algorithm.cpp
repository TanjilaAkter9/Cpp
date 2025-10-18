#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<string> car={"Volvo","Ford","Mustang","BMW","Ferrari"};
  sort(car.begin(),car.end());

  for(auto it=car.begin();it!=car.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<"\n";
  cout<<"\n";



  //reverse
  cout<<"Print in reverse:\n";
  sort(car.rbegin(),car.rend());
  for(auto it=car.begin();it!=car.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<"\n";
  cout<<"\n";




  cout<<"Sort from a specific element:\n";
  sort(car.begin()+1,car.end());
  for(auto it=car.begin();it!=car.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<"\n";
  cout<<"\n";





  cout<<"Search an elemetn:\n";
  vector<int> num={16,7,3,2,99,3,1};
  auto it=find(num.begin() , num.end() , 16);

  if(it!=num.end())
  {
    cout<<"Found: " <<*it<<"\n";
    cout<<"Index: "<<it-num.begin()<<"\n";
    
  }
  else{
    cout<<"Not found\n";
  }
   cout<<"\n";
  cout<<"\n";


  cout<<"Upper_bound\n";
  vector<int> num1={16,7,3,2,99,3,1};
  sort(num1.begin(),num1.end());
  auto it1=upper_bound(num1.begin() , num1.end() , 3);

  if(it1!=num1.end())
  {
    cout<<"Found: " <<*it1<<"\n";
    cout<<"Index: "<<it1-num1.begin()<<"\n";
    
  }
  else{
    cout<<"Not found\n";
  }
  
  cout<<"\n";
  cout<<"\n";

  cout<<"Print Min and Max num:\n";
  vector<int> num2={8,7,6,5,4,3,2,1};
  auto it2=min_element(num2.begin(),num2.end());
  auto it3=max_element(num2.begin(),num2.end());
  if(it2!=num.end())
  {
    cout<<"Min Found: "<<*it2<<" \n";
    cout<<"Index"<<it2-num2.begin()<<"\n";
  }
  if(it3!=num.end())
  {
    cout<<"Max found: "<<*it3<<"\n";
    cout<<"Index:"<<it3-num2.begin()<<"\n";

  }




  cout<<"\n";
  cout<<"\n";

  cout<<"\n";
  cout<<"\n";





  return 0;
}