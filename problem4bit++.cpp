#include<iostream>
using namespace std;
int main(){int x=0;
    int n  ;
    cin>>n;
    for(int i=0; i<n ;i++){
         string str;
         cin>>str;
         if(str=="++x" || str=="x++"){
            x++;
         }
         else{
            x--;
         }
         cout<<x;

    }
}
    


