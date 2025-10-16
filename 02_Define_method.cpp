#include <bits/stdc++.h>
using namespace std;
class Myclass{
  public:
  //Defining method inside the class
  void myMethod_1(){
    cout<<"Hello ";
  }
  // Defining method outside the class
  void myMethod_2();

};
void Myclass::myMethod_2()
{
  cout<<"World";
}
int main() {
  Myclass myObject_1,myObject_2;
  myObject_1.myMethod_1();
  myObject_2.myMethod_2();
  
  return 0;
}