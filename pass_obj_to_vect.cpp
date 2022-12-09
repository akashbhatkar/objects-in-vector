// WAP TO PASS THE OBJECT IN THE VECTOR
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
class a{
    private: 
    int A;
    public:
    a(int k): A(k){cout<<"parameterized constructor"<<endl;}
    
    bool operator < (a obj)
    {
        return A<obj.A;
    }
    
};
int main()
{
    vector<a> avect;
    a obj(10);
    a obj2(30);
    avect.push_back(obj);
    avect.push_back(obj2);
    sort(avect.begin(),avect.end());
    // for(auto x: avect)
    // {
    //     cout<<x<<endl;
    // }
}
/* in order to use pass the object into vector we have to 
overload the < operator to remove the errors */