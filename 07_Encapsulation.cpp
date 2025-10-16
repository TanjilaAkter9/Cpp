#include <bits/stdc++.h>
using namespace std;
class Employee
{
    private:
    int salary;

    public:
    void setsalary(int s)
    {
        salary=s;
    }
    int getsalary()
    {
        return salary;
    }
};
int main() {
    Employee myobj;
    myobj.setsalary(500);
    cout<<myobj.getsalary();
    
  
  return 0;
}