#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int start , int end){
    while(start <= end){
       int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
       start++;
       end--;
    }

}

void rotate(int arr[], int n, int d){
    d = d%n;

    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);



  /*
   //reverse is a pre built function in cpp stl
    reverse(arr,arr+d); //[start,end) // end is not included in reverse
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
  */ 
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 4;

    rotate(arr,n,d);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}