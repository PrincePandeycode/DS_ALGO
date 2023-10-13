#include<bits/stdc++.h>
using namespace std;

//find the smallest and swap it with i(means first element)

int selection_sort(int arr[],int n){
    for(int i = 0;i<=(n-2);i++){
        int mini = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
                // swap(arr[mini],arr[i]);  it is also correct;
            }
            int temp;
            temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }

    }
    return arr[n];
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n; i++) cin>>arr[i];
    selection_sort(arr, n);
    for(int i = 0;i<n ; i++) cout<<arr[i]<<" ";
}