#include<bits/stdc++.h>
using namespace std;

void func(int left, int right, int arr[], int n){
        for(int i = 0; i<n;i++){
            if(left == right) return;
            swap(arr[left],arr[right]);
            left+1;
            right+1;
        }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i<n;i++) cin>>arr[i];
    func(0,n-1,arr,n);
    for (int i = 0; i<n;i++) cout<<arr[i];
}