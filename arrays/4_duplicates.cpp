#include<bits/stdc++.h>
using namespace std;

int remove(int arr[], int n){
    int index = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] != arr[index]){
            arr[index+1] = arr[i];
            index++;
        }

    }
    return index+1;
}
int main(){
    int arr[] = {1,1,2,3,3,4,4,4};
    int n= sizeof(arr)/sizeof(arr[0]);

    int k = remove(arr,n);

    for(int i = 0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}
