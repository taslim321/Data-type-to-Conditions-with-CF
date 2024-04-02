#include <bits/stdc++.h>
using namespace std;

int main(){
   string p1,p2;
   getline(cin,p1);
   getline(cin,p2);
//    cin>>p1>>p2;
    int pos1 = p1.find(" ");
    string sub1 = p1.substr(pos1 + 1);
    int pos2 = p2.find(" ");
    string sub2 = p2.substr(pos1 + 1);
    cout<<sub1<<endl;
    cout<<sub2<<endl;
    return 0;
}