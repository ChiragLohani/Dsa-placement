#include <bits/stdc++.h>

using namespace std;

int main()
{
   
   char k=('A'+4);
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            if(i==j){
                cout<<k;
                
            }
            else{
                cout<<"  ";
            }
        }
        for(int j=i;j<10;j++){
        	if(i+j==10-1){
			
        	cout<<k;
          }
            
            else{
                cout<<" ";
            }
		}
		k--;
        cout<<endl;
    }

    return 0;
}

