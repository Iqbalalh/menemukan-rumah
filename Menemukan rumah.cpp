#include <iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	string a[n],b[n],c,d;
	for(x=0;x<n;x++){
		cin>>a[x]>>b[x];
	}
	cin>>c>>d;
	if((a[0]==c&&b[0]==d)||(a[1]==c&&b[1]==d)){
	cout<<"rumah ditemukan";
	}
	else
	cout<<"rumah tidak ditemukan";
	
}
