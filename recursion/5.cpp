#include<bits/stdc++.h>
using namespace std;
int ans( int i,int n){

	if(n==i){
		return 0;
	}
	else{
		if(n%i==0)
		return 1;
	
	else{
	
		return ans(i+1,n);	
	}
}
}
int main(){
	int n,i;
	cin>>n;
	for(i=2;i<=n;i++){
		if(ans(2,i)==0)
		cout<<i<<" ";
	}
	
	return 0;
}
