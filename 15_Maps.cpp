#include <bits/stdc++.h>
using namespace std;
int main() {
  map<string, int> people={{"John",32},{"Bob",33},{"Adele",44}};

  cout<<people.at("Adele")<<"\n";
  cout<<people.at("Bob")<<"\n";
  people.at("John")=50;
  cout<<people.at("John")<<"\n";

  return 0;
}