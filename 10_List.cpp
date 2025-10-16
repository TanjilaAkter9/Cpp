#include <bits/stdc++.h>
using namespace std;
int main() {
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  //Before adding in front
  cout<<"Before\n";
for (string car : cars) {
  cout << car << " ";
}

cout<<"\nAfter\n";
cars.front()="Mustang";
cars.push_front("BB");
cars.push_back("TT");
for (string car : cars) {
  cout << car << " ";
}
  return 0;
}