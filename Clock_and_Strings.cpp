#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int mn=min(a,b),mx=max(a,b);
		bool flag1=false;
		bool flag2=false;
		for(int i=mn;i<=mx;i++){
			if(i==c ){
				flag1 = true;
			}
			if(i==d){
				flag2 = true;
			}
		}
		/*for(int i=mn;i<=mx;i++){
			if(i==d){
				flag2 = true;
				break;
			}b
		}
		*/
		if( (!flag1 && flag2) ||(flag1 && !flag2)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";

		}
		
	}

	return 0;
}