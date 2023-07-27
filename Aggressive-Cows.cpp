#include<bits/stdc++.h>
using namespace std;

bool sol(int mid , vector<int>&arr , int c ){
    int cow = 1;
    int position = arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i] - position >=mid){
            cow++;
            if(cow==c){
                return true;
            }
            else{
                position =arr[i];

            }
        }
    }
    return false;


}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n ,c;

        cin>>n>>c;
        vector<int>arr(n);
        
        
        for(int i=0; i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());

        int s=0 ;
        int maxi=-1;
        for(int i =0 ; i<arr.size();i++){
            maxi = max(maxi,arr[i]);
        }
        int e =maxi;
        int ans;
        while(s<=e){
            int mid = (s+e)/2;
            if(sol(mid,arr ,c)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}