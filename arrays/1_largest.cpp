#include<bits/stdc++.h>
using namespace std;

int Largest(vector<int> v,int n){

    int max = v[0];
    for(int i = 0;i<n;i++){
        if(v[i]> max){
            max = v[i];
        }
    }
    return max;
}

int smallest(vector<int> &v, int n){
    int smallest = v[0];
    for(int i = 0;i<n;i++){
        if(v[i]<smallest){
            smallest = v[i];
        }
    }
    return smallest;
}
int main(){
    int n;
    // cin>>n;
    vector<int> v = {4,2,11,7,9};
     n = v.size();
    int lar = Largest(v,n);
    int smal = smallest(v,n);
   
   cout<<"largest element is "<<lar<<endl;
   cout<<"smallest element is "<<smal<<endl;
}