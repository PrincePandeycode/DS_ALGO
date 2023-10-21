#include<bits/stdc++.h>
using namespace std;

vector<int> Intersection(int arr1[], int arr2[],int n1,int n2){
    vector<int> ans;
    int vis[n2] = {0};
    
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<n2;j++){
            if(arr1[i] == arr2[j] && vis[j] == 0){
                ans.push_back(arr1[i]);
                vis[j] = 1;
                break;
            }

            if(arr1[j]>arr1[i]) break;
        }
    }
    return ans;
}

 int main(){
    int arr1[] = {1,1,2,3,4,5,6,6,7,7};
    int arr2[] = {2,3,4,5,5,6,7,8,8};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    vector<int> v1;
    v1 = Intersection(arr1,arr2,n1,n2);

    for(auto it: v1){
        cout<<it<<" ";
    }
 }