#include<bits/stdc++.h>
using namespace std;

int Missing(int arr[], int n, int N){
    int s1 = (N*(N+1))/2;
    int arrsum = 0;
    for(int i = 0;i<n;i++){
        arrsum = arrsum + arr[i];
    }
    int num = s1 - arrsum;
    return num;
}

int main(){
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int N =5;

    int miss = Missing(arr,n,N);

    cout<<"Missing number is "<<miss;
    return 0;
}