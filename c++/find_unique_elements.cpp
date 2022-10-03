#include<bits/stdc++.h>
using namespace std;

int findUnique(int ar[],int size)
{
	int ans = 0;
	for (int i = 0; i < size; i++)
	{
		ans = ans ^ ar[i];
		
	}
	return ans;
}

int main()
{
	int t;
	cin>> t;

	while (t--)
	{
		int size;
		cin>>size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin>>input[i];
		}
		
		//Calling the procedure function
		cout<<findUnique(input,size)<<endl;

	}
	
	return 0;
}