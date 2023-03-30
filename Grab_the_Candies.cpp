#include<iostream>
using namespace std;
int main(){
	int tests;
	cin>>tests;
	while(tests--)
	{
		int numOfCandies;
		cin>>numOfCandies;
		int arr[numOfCandies];
		int sumEven = 0;
		int sumOdd = 0 ;
		for (int i = 0 ; i < numOfCandies; i++){
			cin>>arr[i];
			if (arr[i] %2 == 0) sumEven = sumEven + arr[i];
			else sumOdd = sumOdd + arr[i];
		}
		if (sumEven > sumOdd) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		

	}
}