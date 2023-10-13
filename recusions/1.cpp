#include<bits/stdc++.h>
using namespace std;
// void func(){            //recursive function without condition leads to stack overflow
//     cout<<"1"<<endl;
//     func();         // calls itself
// }

 
void func(int count){
    if (count == 4) {
        return ;
        }
    cout<<count<<endl;
    count++;
    func(count);
}
int main(){
    int count = 0;
    func(count); //
}