#include<iostream>
using namespace std;
int main()
{
	int tests;
	cin>>tests;
	while(tests--)
	{
		int len, querry;
		cin>>len>>querry;
		int arr[len];
		int sum = 0;
		for (int i = 0 ; i < len; i++)
		{
			cin>>arr[i];
			sum = sum + arr[i];
		}
		while(querry--)
		{
			int upperLimit;
			int lowerLimit;
			int toReplaceWith;
			cin>>lowerLimit>>upperLimit>>toReplaceWith;
			int sum2 = sum;
			for (int i = lowerLimit-1; i <= upperLimit-1; i++)
			{
				sum2 = sum2 + arr[i] - toReplaceWith;
			}
			if (sum2 % 2 == 0) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}

	}
}