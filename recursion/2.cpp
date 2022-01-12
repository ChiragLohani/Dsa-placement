#include<bits/stdc++.h>
using namespace std;
void ans( int n){
	
	if(n>0){
		cout<<n<<" " ;
			
	}
		return ans(n-1);
	
}
int main(){
	int n;
	cin>>n;
	ans(n);
	return 0;
}
