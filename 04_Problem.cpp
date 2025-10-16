/*
Create a class Dog with a method bark() that prints "Woof!".
Then call that method from main() using an object of the class.
*/
#include <bits/stdc++.h>
using namespace std;
class Dog{
    public:
    void bark_1(){
        cout<<"Woof!\n";
    }
    void bark_2();
};
void Dog::bark_2()
{
    cout<<"Woof Woof!!";
}
int main() {
    Dog myobj_1,myobj_2;
    myobj_1.bark_1();
    myobj_2.bark_2();
  
  return 0;
}

