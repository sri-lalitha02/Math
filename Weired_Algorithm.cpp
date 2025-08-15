// Weired Algorithm
#include<bits/stdc++.h>
using namespace std;
void WeirdAlgorithm(long long num)
{
	if(num == 1) return ;
	else if(num%2 == 0)
	{
		num = num/2;
		cout<<num<<" ";	
	}
	else
	{
		num *=3;
		num = num+1;
		cout<<num<<" ";
		
	}
	return WeirdAlgorithm(num);
}
int main()
{
	long long num;
	cin >> num;
	cout<<num<<" ";
	WeirdAlgorithm(num);
}
