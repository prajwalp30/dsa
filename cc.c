#include<iostream>
using namespace std;
class employee
{
private:
    //private attribute
    int salary;
public:
    //setter
    void setsalary(int s)
    {
        salary=s;
    }
    //getter
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    employee myobj;
    myobj.setsalary(50000);
    cout<<myobj.getsalary();
    return 0;
}
