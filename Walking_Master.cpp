#include<iostream>
using namespace std;
int main(){
	int tests;
	cin>>tests;
	while(tests--)
	{
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		int sol;
		sol =  d-b ;
		if (c > (a+sol) || b > d) cout<<"-1"<<endl;
		else {
			cout<<(sol + (a+sol-c))<<endl;
		}
	}
}