#include<bits/stdc++.h>
using namespace std;
int kthelement(vector<int>&arr1, vector<int>&arr2, int n, int m, int k){
   int findi = k;
   int count = 0;
    int i = 0;
    int j = 0;
   int elat1 = -1;
   while(i<n && j<m){
       if(arr1[i]>arr2[j]){
           elat1 = arr2[j];
           count++;
           j++;
           if(count == findi) return elat1;
       }

       else{
           elat1 = arr1[i];
           count++;
           i++;
           if(count == findi) return elat1;

       }
   }

   while(i<n){
        elat1 = arr1[i];
           count++;
           i++;
           if(count == findi) return elat1;

   }

   while(j<m){
       elat1 = arr2[j];
           count++;
           j++;
           if(count == findi) return elat1;
   }
   return 0;
}

int main() {
    vector<int> arr1 = {2,3,6,7,9};
    vector<int> arr2 = {1,4,8,10};
    int n = arr1.size();
    int m = arr2.size();
    int k = 5;
    cout<<"The element at the kth position in the final sorted array is "
    <<kthelement(arr1,arr2,n,m,k);
    return 0;
}