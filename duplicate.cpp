#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int duplicate(int arr[], int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j)
            continue;
            else if(arr[i]==arr[j]){
                return i;
            }
        }
    }
    cout<<"No duplicate element. "<<endl;
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0; i<n; i++){
      cin>>arr[i];
    }
    display(arr, n);   
    int digit= duplicate(arr, n);
    if(digit==-1)
    cout<<" ";
    else
    cout<<arr[digit];
    return 0;
}