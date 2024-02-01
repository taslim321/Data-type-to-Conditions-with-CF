#include <bits/stdc++.h>
using namespace std;

int main(){
   int number;
   cin>>number;

   int r = number/1000;
   if(r%2==0)
   {
    cout<<"EVEN";
   }else
   {
    cout<<"ODD";
   }
    return 0;
}