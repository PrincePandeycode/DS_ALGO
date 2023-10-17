#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> v, int n){

    

    for(int i = 1;i<n;i++){
        if(v[i]>=v[i-1]){

        }
        else{
            return false;
        }
       
    }
     return true;

}
 int main(){
    
    vector<int> v = {1,2,4,3,5,6,7,5,4,36,7,9};
    vector<int> v2 = {1,2,3,4,5,6,7,8};

    int n;
    n= v.size();

    int n2;
    n2= v2.size();

    int cv = check(v,n);
    cout<<cv<<endl;
    int cv2 = check(v2,n2);
    cout<<cv2<<endl;
   
    
 }