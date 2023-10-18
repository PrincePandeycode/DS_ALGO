#include<bits/stdc++.h>
using namespace std;
void movetoend(int arr[], int n){

    int j = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1) return;

    for(int i =j+1;i<n;i++){
        if(arr[i] !=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
}
int main(){
    // int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);


    movetoend(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}