#include <bits/stdc++.h>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    Car(){
        brand="Unknown";
        model="Unknown";
    }
    Car(string x,string y){
        brand=x;
        model =y;
    
    }
};
int main() {
    Car myobj1;
    Car myobj2("BMW","X5");
    Car myobj3("Ford","Mustang");

    cout<<"Car1: "<<myobj1.brand<<" "<<myobj1.model<<"\n";
    cout<<"Car2: "<<myobj2.brand<<" "<<myobj2.model<<"\n";
    cout<<"Car3: "<<myobj3.brand<<" "<<myobj3.model<<"\n";

  
  return 0;
}