#include <bits/stdc++.h>
using namespace std;
class Car{ //Class
    public:   //Access specifier
    string brand;
    string model;
    int year;
    Car(string x,string y,int z){ // Constructor- same name as class,no return type
        brand=x;
        model=y;
        year=z;
    }
};
int main() {
    Car myobj_1("BMW","X5",1998);
    Car myobj_2("Ford","Z5",1999);
    
    cout<<myobj_1.brand<<" "<<myobj_1.model<<" "<<myobj_1.year<<"\n";
    cout<<myobj_2.brand<<" "<<myobj_2.model<<" "<<myobj_2.year<<"\n";

  return 0;
}