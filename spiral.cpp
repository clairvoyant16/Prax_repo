#include<iostream>
using namespace std;


int main(){
    int r,c;
    cout<<"Row: ";
    cin>>r;
    cout<<"Column: ";
    cin>>c;
    int arr[r][c];
    int i,j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    
    return 0;
}