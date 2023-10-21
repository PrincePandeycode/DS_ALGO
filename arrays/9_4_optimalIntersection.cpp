#include<bits/stdc++.h>
using namespace std;

vector<int> interS(int arr1[], int arr2[], int n1,int n2){

    int i = 0;
    int j = 0;

    vector<int> ans;

    while(i<n1 && j<n2){
        if(arr1[i] <arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }

        else{
                ans.push_back(arr1[i]);
                i++;
                j++;
        }
    }
    return ans;
}


int main(){
    int a1[] = {1,2,3,3,3,4,8,9};
    int a2[] ={2,3,4,9};

    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);

    vector<int> v;

    v= interS(a1,a2,n1,n2);
    for(auto it: v) {
        cout<<it<<" ";
        }
}