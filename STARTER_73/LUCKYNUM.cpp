#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int flag;
	    for(int i=0;i<s.size();i++){
	        flag=0;
	        if(s[i]=='7'){
	            flag=1;
	            cout<<"YES"<<endl;
	            break;
	        }
	    }
	    if(flag==0) cout<<"NO"<<endl;
	}
	return 0;
}