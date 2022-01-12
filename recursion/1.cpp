#include<bits/stdc++.h>
using namespace std;
void ans( int n){
	static int i=1;
	if(n>0){
		cout<<i<<" " ;
		i++;	
	}
		return ans(n-1);
	
}
int main(){
	int n;
	cin>>n;
	ans(n);
	return 0;
}
