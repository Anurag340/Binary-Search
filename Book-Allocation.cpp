#include <bits/stdc++.h> 
using namespace std;

bool sol(int mid ,vector<int>&time , int n ,int m){
	int dayCount =1;
	int hours=0;
	for(int i=0 ; i<m ;i++){
		
		if(hours+time[i]<=mid){
			hours+=time[i];
			
		}
		else{
			dayCount++;
			if(dayCount>n || time[i]>n){
				return false;
			}
			hours=time[i];


		}

	}
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	
     int s=0,e=0;
     int ans;
	for(int i=0 ; i<m;i++){
		e+=time[i];

	}
	while(s<=e){
	     int mid = (s+e)/2;
		
		if(sol(mid ,time ,n,m)){
			ans=mid;
			e=mid-1;

		}
		else{
			s=mid+1;
		}
	}
	return ans;
	// Write your code here.
}