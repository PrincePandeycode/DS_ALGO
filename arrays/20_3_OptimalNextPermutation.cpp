#include<bits/stdc++.h>
using namespace std;

vector<int> NextPermutation(vector<int>&v){
    int n = v.size();
    int index = -1;
    for(int i = n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(v.begin(),v.end());
        return v;
    }
    for(int i = n-1;i>index;i--){
        if(v[index]<v[i]) {
        swap(v[index],v[i]);
        break;
        }
    }
    sort(v.begin()+index+1,v.end());

return v;

}

int main(){
    vector<int> v = {1,2,4,5,3};
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int> ans = NextPermutation(v);
    for(auto it : ans){
        cout<<it<<" ";
    }
}