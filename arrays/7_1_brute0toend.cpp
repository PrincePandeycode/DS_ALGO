#include<bits/stdc++.h>
using namespace std;

    void zerotoend(int arr[],int n){
       vector<int> temp;
       for(int i = 0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
       }

        int j = temp.size();
       for(int i = 0;i<j;i++){
            arr[i] = temp[i];
       }

       for(int i = j;i<n;i++){
        arr[i] = 0;
       }


    }
int main(){
    int arr[] ={1,0,2,3,2,0,0,4,5,1} ;
    int n = sizeof(arr)/sizeof(arr[0]);

        zerotoend(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}