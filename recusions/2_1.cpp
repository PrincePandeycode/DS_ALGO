#include<bits/stdc++.h>
using namespace std;
// it is my approach
/*void name(string s, int count){
    if(count == 5) return;

   
    cout<<s<<endl;
        count++;
        name(s,count);
   
}

int main(){
    string s = "Prince";
     int count = 0;
    name(s,count);
}*/

// striveer approach by changing parameters

void func(int i , int n){
    if(n<i){ return;}
    cout<<"Prince"<<endl;
    func(i+1,n);
}

int main(){
    int n;
    cin>>n;
    func(1,n);
}
