#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0; i<n; i++){
    cin>>arr[i];
    }
    int j;
    int flag=0, N;
    int sum=0;
    int start, end;
    cout<<"N: ";
    cin>>N;
    for(i=0; i<n; i++){
        sum=0;
            for(j=i; j<n; i++){
                sum+= arr[j];
                if(sum==N){
                    start= i;
                    end= j;
                    flag=1;
                    break;
                }
            }
    }
    if(flag)
    cout<<"Between index: "<<start<<" & "<<end<<endl;
    else
    cout<<"Not found"<<endl;
    return 0;
}