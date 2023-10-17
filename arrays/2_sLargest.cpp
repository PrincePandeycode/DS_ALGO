#include<bits/stdc++.h>
using namespace std;

int slargest(vector<int> &v, int n){
    int largest = v[0];
    int seclargest = INT16_MIN;

    for(int i = 0;i<n;i++){
        if(v[i]>largest){
            seclargest = largest;
            largest = v[i];
        }
        else if(v[i]<largest && v[i]>seclargest){
            seclargest = v[i];
        }
    }
    return seclargest;
}

int ssmallest(vector<int> &v, int n){
    int smallest = v[0];
    int secsmallest = INT_MAX;

    for(int i = 0;i<n;i++){
        if(v[i]<smallest){
            secsmallest = smallest;
            smallest = v[i];
        }

        else if(v[i] >smallest && v[i]<secsmallest){
            secsmallest = v[i];
        }
    }
    return secsmallest;
}

int main(){
    int n;
    vector<int> v = {1,4,2,6,8,99,88,98,65,34};
    n = v.size();
    int seclargest = slargest(v,n);
    int secsmallest = ssmallest(v,n);
    cout<<"the second largest element is "<<seclargest<<endl;
    cout<<"the second smallest element is "<<secsmallest<<endl;

}