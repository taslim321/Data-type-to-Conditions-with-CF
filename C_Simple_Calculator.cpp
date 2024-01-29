#include <bits/stdc++.h>
using namespace std;

int main(){
   long long x,y;
   cin>>x>>y;
   long sum = x+y;
   long sub = x-y;
   long long mult =x*y;
   cout<<x<<" "<<"+"<<" "<<y<<" "<<"="<<" "<<sum<<endl;
   cout<<x<<" "<<"*"<<" "<<y<<" "<<"="<<" "<<mult<<endl;
   cout<<x<<" "<<"-"<<" "<<y<<" "<<"="<<" "<<sub<<endl;
    return 0;
}