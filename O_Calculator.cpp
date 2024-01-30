#include <bits/stdc++.h>
using namespace std;

int main(){
   char a,b,op,sum,sub,mul,div;
   cin>>a>>op>>b;
   
   switch (op)
   {
   case '+' :
    cout<<a+b;
    break;
   case '-':
    cout<<a-b
    break;
   case '*':
    cout<<a*b;
    break;
   case '/':
    cout<<a/b;
    break;
   
   default:
    break;
   }
    return 0;
}