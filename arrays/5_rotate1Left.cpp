#include<bits/stdc++.h>
using namespace std;
/*
    array approach/ vector approach is below  

void rotate(int arr[], int n){

    int temp = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
}
int main(){

     int n = 6;
    int arr[] = {1,2,3,4,5,6};

    rotate(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/


//vector approach

void rotate(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    int n;
    n = arr.size();

    rotate(arr,n);

    for(auto it: arr){
        cout<<it<<" ";
    }
}
   
