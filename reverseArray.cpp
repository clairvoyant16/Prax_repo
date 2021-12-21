#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int k=0; k<n; k++){
        cin>>arr[k];
    }
    int temp=0, i, j;   
    i=0, j=n-1;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++, j--;
    }

    cout<<endl;

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}