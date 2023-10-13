#include<bits/stdc++.h>
using namespace std;

void func(int left, int arr[], int n){
    if(left >= (n/2)) return;
    swap(arr[left] ,arr[n-left-1]);
    func(left+1,arr,n);
    

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];
    func(0,arr,n);
    for(int i = 0;i<n;i++) cout<<arr[i];
}