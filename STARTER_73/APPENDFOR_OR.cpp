#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,y;
	cin>>t;
	while(t--){
	    cin>>n>>y;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum = sum | a[i];
	    }
	    int flag=0,i;
	    for(i=0;i<=y;i++){
	        int res = sum | i;
	        if(res==y){
	            flag=1;
	            break;
	        }
	    }
	    if(flag) cout<<i<<endl;
	    else cout<<-1<<endl;
	}
	return 0;
}
