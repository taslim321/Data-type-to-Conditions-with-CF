#include <bits/stdc++.h>
using namespace std;

int main(){
   char alphabet;
   cin>>alphabet;

   if(alphabet>='A' && alphabet<='Z')
   {
    alphabet += 32;
   }else if(alphabet>='a' && alphabet<='z')
   {
    alphabet -= 32;
   }
   cout<<alphabet;

    return 0;
}