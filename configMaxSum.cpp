#include<iostream>
#include<vector>
using namespace std;

void display(int arr[], int n){
for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
}

void rotate(int *arr, int n){
    int i, first= arr[0];
    for(i=0; i<n-1; i++){
        arr[i]= arr[i+1];
    }
    arr[i]=first;
    return;
}

int maximum(vector<int> arr, int n){
    int max= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
}
void config(int *arr, int n){
    int j, i=1;
    int sum=0;
    vector<int> newarray(n);
    for(j=0; j<n; j++)
        newarray[i]= 0;

    while(i<=n){
        rotate(arr, n);
        for(j=0; j<n; j++){
            sum+= j*arr[j];
            newarray[j]= sum;
        }
        int ans= maximum(newarray, n);
        cout<<"Maximum: "<<ans;
        return;
    }
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
    config(arr, n);
    return 0;
}