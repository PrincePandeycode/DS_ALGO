#include<bits/stdc++.h>
using namespace std;

vector<int> UnionA(int arr1[], int arr2[], int n1, int n2){
    vector<int> UnionArr;
    int i = 0;
    int j = 0;

    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if(UnionArr.size() == 0 || UnionArr.back() != arr1[i]){
                UnionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(UnionArr.size() == 0 || UnionArr.back() != arr2[j]){
                UnionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(j<n2){
        if(UnionArr.size() == 0 || UnionArr.back() != arr2[j]){
            UnionArr.push_back(arr2[j]);
        }
        j++;
    }

    while(i<n1){
        if(UnionArr.size() == 0 || UnionArr.back() != arr1[i]){
            UnionArr.push_back(arr1[i]);
        }
        i++;
    }

    return UnionArr;
}

int main(){
    int arr1[] = {1,2,3,3,4,5,5,6,7};
    int arr2[]= {1,2,3,7,7,8,9,9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    vector<int> v = UnionA(arr1,arr2,n1,n2);

    for(auto it : v){
       cout<<it<<" ";
    }
}