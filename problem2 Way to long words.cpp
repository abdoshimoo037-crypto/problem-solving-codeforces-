#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int x=s.size();
        if(x>10){
            cout<<s[0]<<x-2<<s[x-1];
        }
        else{
            cout<<s;
        }
        return 0;
    }
}