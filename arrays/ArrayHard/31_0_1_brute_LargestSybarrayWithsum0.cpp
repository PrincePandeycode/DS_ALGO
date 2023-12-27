#include<bits/stdc++.h>
using namespace std;


int LargestSubarray(vector<int>&a ){
    
    int maxlen = 0;
    int n = a.size();
    for(int i = 0;i<n;i++){
       int len = 0;
        int sum = 0; // starts sum from 0 cause you dont know if only one elemnt is the sum like need 21 and sum is 21 . if you give it arr[i] == sum , then you end up adding up arr[j]-->incorrect result
        for(int j = i;j<n;j++){
           sum = sum +a[j];

           if(sum == 0) {
           len = j-i+1;
          
           }
          
         maxlen = max(maxlen,len);

            
        }
    }

    return maxlen;
}
int main(){

    vector<int> v = {9, -3, 3, -1, 6, -5};

    int a = LargestSubarray(v);

    cout<<a;
}