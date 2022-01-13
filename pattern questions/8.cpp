#include<iostream>
using namespace std;
int main()
{
    cout<<"size:";
    int size;
    cin>>size;
    int in,out;
   int p=size/2+1,x=1;

     for(out=1;out<=size;out++)
       {
           for(in=1;in<=size;in++)
           {
               if(in==p || in==size-p+1)
               {
               cout<<x;
                 }
               else
               {
                 cout<<" ";
               }
             }
           if(out<=size/2){
        	   p--;
               x++;
               }
           else{
              p++;
              x--;
           }
            cout<<"\n";
     }
}

