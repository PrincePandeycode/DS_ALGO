#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> &v, int low, int high){
    int pivot = v[low];
    cout<<" pivoy is "<<pivot<<endl;
    int i = low;
    int j = high;
    while(i<j){

        while(v[i]<=pivot && i<=high-1){
                i++;
                cout<<"i -> "<<i<<endl;
        }

        while(v[j]>pivot && j>= low+1){
            j--;
             cout<<"j -> "<<j<<endl;

        }

        if(i<j) {
            swap(v[i],v[j]);
        cout<<"swapping "<<v[i]<<"  "<<v[j]<<endl;
        }
        

    }
    swap(v[low],v[j]);
    cout<<v[low]<<"swapped with "<<pivot<<endl;
    return j;

}


void quickSort(vector<int> &v, int low,int high){
    if(low<high){
        int partition = fun(v,low,high);
        quickSort(v,low,partition-1);
        quickSort(v,partition+1,high);
        
    }
}


int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0;i<n;i++){

        int num;
        cin>>num;
        v.push_back(num);
    }
    int size = v.size();

    quickSort(v,0,size);

    for(auto it : v){
        cout<<it<<" ";
    }
}