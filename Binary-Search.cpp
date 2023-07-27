#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the number to be found :"<<endl;
    cin>>k;
    int s = 0 , e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            cout<<"Yes"<<endl;
            break;
        }

         if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}