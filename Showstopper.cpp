#include<iostream>
using namespace std;
int main()
{
	int tests;
	cin>>tests;
	while(tests--)
	{
		int len;
		cin>>len;
		int a[len];
		int b[len];
		int ai = 0;
		int bi = 0;
		int max_a = -1;
		int max_a_i;
		int max_b = -1;
		int max_b_i;
		for (int i = 0 ; i < len ; i++)
		{
			cin>>a[i];
			if (max_a <= a[i])
			{
				max_a = a[i];
				max_a_i = i;
			}

		}
		for (int i = 0 ; i < len ; i++)
		{
			cin>>b[i];
			if (max_b <= b[i])
			{
				max_b = b[i];
				max_b_i = i;
			}

		}

		//cout<<max_a<<" "<<max_b<<endl;

		if ((max_a == a[len-1]) && (max_b == b[len-1])) cout<<"YES"<<endl;

		if ((max_a == a[len-1]) && (max_b != b[len-1]) )
		{
			if (max_b > max_a) cout<<"NO"<<endl;
			else if (max_a == max_b)
			{
				if (b[max_a_i] >  a[max_b_i]) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}
			else cout<<"YES"<<endl;
		}
		if ((max_a != a[len-1])  && (max_b == b[len-1]))
		{
			if (max_a > max_b) cout<<"NO"<<endl;
			else if (max_a == max_b)
			{
				if (b[max_a_i] > a[max_b_i]) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}
			else cout<<"YES"<<endl;	
		}

	}

	//unsolved
}