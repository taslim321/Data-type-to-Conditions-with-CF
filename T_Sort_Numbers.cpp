#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin>>n;
    if(typeid(n)==typeid(int))
    {
        cout<<"int "<<n<<endl;
    }else if(typeid(n)==typeid(float))
    {
        cout<<"float "<<n<<endl;
    }
    return 0;
}