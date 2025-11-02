#include <bits/stdc++.h>
using namespace std;
void recur(int c,int d,string& i,string& z){
   if(c<d)
   return;
    z+=i[c];
    recur(c-1,d,i,z);
}
int main(){
   string n="hahah";
   string rev="";
   recur(n.size()-1,0,n,rev);
   if(rev==n)
   cout<<"True";
   else
   cout<<"False";
}

 