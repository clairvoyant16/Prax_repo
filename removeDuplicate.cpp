#include<iostream>
#include<stack>
using namespace std;
void display(int arr[], int n){
for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
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

    stack<int> st;
    int k=0;
    int j;
    int count=0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                continue;
            }

            else if(arr[i]==arr[j]){
               st.push(j);
            }
        }
    
    }

 while(!st.empty()){
     arr[st.top()]= arr[st.top()+1];
     
     st.pop();

 }

 display(arr, n);
    return 0;
}