#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans(n);
    for(i=0; i<n; i++){
        ans[i]=0;
    }
    sort(arr, arr+n);
    cout<<endl;
    for(i=0; i<n; i++){
        ans[i]= arr[i];
    }
    cout<<"K (base index 0): ";
    int k;
    cin>>k;
    cout<<"K smallest: "<<arr[k]<<" K largest: "<<arr[n-k-1];
    return 0;
}