#include <bits/stdc++.h>
using namespace std;

int main(){
   char alphabet;
   cin>>alphabet;

   if(alphabet>='A' && alphabet<='Z') //65-90
   {
    alphabet += 32;
   }else if(alphabet>='a' && alphabet<='z') //97-122
   {
    alphabet -= 32;
   }
   cout<<alphabet;

    return 0;
}