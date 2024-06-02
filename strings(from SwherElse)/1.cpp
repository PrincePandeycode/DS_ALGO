#include<bits/stdc++.h>
using namespace std;

int main(){

    // 1
    // char arr[7];
    // for(int i = 0;i<7;i++){
    //     cin>>arr[i];  //removes any space and print only 7 charaters 

    // }
    // cout<<arr;

    // 2.
    // char arr[] = {'p','r','\0 ','n','c', '\0'};  // prints only pr , can print whitesspaces
    // cout<<arr;

    // 3.
    // char arr[10];  // we we use only cin we will overwrite the adjacent memory --> entering more than 10 character use cin.getline to restrict the size
    // cin>>arr;
    // cout<<arr;

    // --------------------------------------------------------------------------------------

    // strings
    // 1.
    // string s ;
    // cin>>s;         //it doesnt print after whitespace
    // cout<<s;

    // 2.
    // string s;
    // getline(cin,s); // it will print everything with space
    // cout<<s;
    // cout<<s.size(); 

    //3. concatenation
    string a = "prince";
    string b = "pandey";
    b.pop_back();

    string name = a+" "+b;
    name.push_back('R');
    cout<<name;
}