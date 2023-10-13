#include<bits/stdc++.h>
using namespace std;

int InsertionSort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int j =i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }

    }
    return arr[n];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];

    InsertionSort(arr,n);

    for(int i = 0;i<n ;i++)  cout<<arr[i]<<" ";
}