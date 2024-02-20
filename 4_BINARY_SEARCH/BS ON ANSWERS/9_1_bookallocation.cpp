#include<bits/stdc++.h>
using namespace std;

int students(vector<int>&arr, int pages){
    int student = 1;
    int Totalpages = 0;

    for(int i = 0;i<arr.size();i++){
        if(arr[i]+Totalpages<=pages){
            Totalpages +=arr[i];
        }
        else{
            student++;
            Totalpages = arr[i];
        }
    }
    return student;
}

int bookAllocate(vector<int>&arr, int m){
    int n = arr.size();
    if(m>n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int  high = accumulate(arr.begin(),arr.end(),0);

    int ans = 0;
    while(low<=high){
        int mid = (low+high)/2;
        int chk = students(arr,mid);
        if(chk>m){
           low = mid+1;

        }
       
        else{
             ans = mid;
           high = mid-1;

        }
    }
    return ans;
}

int main(){
    vector<int> arr = {25,46,28,49,24};
    int m = 4;

    int pages = bookAllocate(arr,m);

    cout<<pages;
    return 0;
}