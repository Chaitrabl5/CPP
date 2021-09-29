#include<iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int t=2;
	
	float a=0;
	while(t--){
		int l,b;
		cin>>l>>b;
		float ap  = (b*l)/2;
		if(ap>a) a = ap;
	}
	cout<<fixed<<setprecision(6)<<a;
	

	return 0;
}