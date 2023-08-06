#include<bits/stdc++.h>
using namespace std ;

bool sol(int mid , vector<int>&arr , int c){
	int cow_ct=1;
	int pos=arr[0];

	for(int i=1 ; i<arr.size();i++){
		if(arr[i]-pos>=mid){
			cow_ct++;
			pos=arr[i];

			if(cow_ct==c){
				return true ;
			}
		
			
		}
	}
	return false ;

}


int main(){
	int t;
	cin>>t;
	while(t--){
		 int n ,c;

        cin>>n>>c;
        vector<int>arr(n);
        
        
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        int s=0 ;
       
        int e =1e9;
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
