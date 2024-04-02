#include <bits/stdc++.h>
using namespace std;
// min_v = min(input, min_v);
    // max_v = max(input, max_v);
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int min,max;
   //max value
   if(a>=b && a>=c)
   {
    max=a;
   }else if(b>=a && b>=c)
   {
    max=b;
   }else{
    max=c;
   }
   //min value
   if(a<=b && a<=c)
   {
    min=a;
   }else if(b<=a && b<=c)
   {
    min=b;
   }else{
    min=c;
   }
   cout<<min<<" "<<max;
//    there have anathor way to find max and min number 
    return 0;
}