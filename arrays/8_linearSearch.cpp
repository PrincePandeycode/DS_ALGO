#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n, int num)
{
    for(int i = 0;i<n;i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}
int main(){

    int arr[] = { 3,2,3,4,5,6,7,8,8,10,19,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int num = 10;
      int find=  linearSearch(arr,n,num);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"the location is : "<<find;
}