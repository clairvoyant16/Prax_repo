#include<iostream>
using namespace std;

void reverse(int *arr, int i, int j){
    if(i>=j){
        return;
    }
    else{
        reverse(arr, i+1, j-1);
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        return;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int k=0; k<n; k++){
        cin>>arr[k];
    }
    reverse(arr, 0, n-1);

    cout<<endl;
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
