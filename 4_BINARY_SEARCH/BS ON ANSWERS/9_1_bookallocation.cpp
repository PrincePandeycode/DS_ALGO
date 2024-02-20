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

    for(int pages = low ;pages<=high;pages++){
        if(students(arr,pages) == m){
            return pages;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {25,46,28,49,24};
    int m = 4;

    int pages = bookAllocate(arr,m);

    cout<<pages;
    return 0;
}