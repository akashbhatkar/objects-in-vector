/********WAP FOR STORING THE OBJECT INTO THE VECTOR ******************/
#include<iostream>
#include<vector>
using namespace std;

class A
{
    int b;
public:
    A(int a)
    {
        b=a;
    }
    void show()
    {
        cout<<b<<endl;

    }
};

int main()
{
    int i,a;

    vector<A> obj;// Vector is of type class 
    for(i=0;i<5;i++)
    {
        cin>>a;
        obj.push_back(A(a));// storing the object into the vector containers

    }
    cout<<obj.size()<<endl;
    for(i=0;i<5;i++)
    {
        obj[i].show();
    }
}
