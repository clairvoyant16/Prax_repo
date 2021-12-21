#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    int i;
    for(i=0; i<size; i++){
        cin>>arr[i];
    }
    int l,m,n;
    l=0; n=size-1;
    m=0;

    while(m<=n){
        int x=arr[m];
        if(x==0){
            swap(arr[l], arr[m]);
            l++, m++;
        }
        else if(x==1){
            m++;
        }
        else{
            swap(arr[m], arr[n]);
            n--;
        }
    }
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}