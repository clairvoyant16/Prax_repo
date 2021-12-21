#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void rotate(int *arr, int n, int k){
    int i,j;
    while(k--){
        int first= arr[0];
        for(i=0; i<n-1; i++){
            arr[i]= arr[i+1];
        }
        arr[i]= first;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"K: ";
    cin>>k;
    display(arr, n);
    rotate(arr, n, k);
    display(arr, n);
    return 0;
}