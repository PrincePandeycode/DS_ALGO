#include<bits/stdc++.h>
using namespace std;

vector<int> UnionA(int arr1[],int arr2[],int n1,int n2){
    

    set<int> st;
    for(int i = 0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i = 0;i<n2;i++){
        st.insert(arr2[i]);
    }
    int j = 0;
    int size = st.size();
    vector<int> UnionArr;
    for(auto it: st){
        UnionArr.push_back(it);

    }

    return UnionArr;
}

int main(){
    int arr1[] = {1,1,2,3,3,4,5,5,6};
    int arr2[] = {1,2,3,4,7,8,9,9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> v;
     v =  UnionA(arr1,arr2,n1,n2);

    for(auto it : v){
        cout<<it<<" ";

    }


}