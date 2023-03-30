#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int a;
		int b;
		cin>>a>>b;
		int c = (abs(a)+abs(b))+(max(abs(a),abs(b))-min(abs(a),abs(b)));
		if (abs(a) != abs(b)) c--;
		cout<<c<<endl;
	}
	return 0;
}