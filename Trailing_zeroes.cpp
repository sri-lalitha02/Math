
//Number of Trailing Zeroes in a number
#include<bits/stdc++.h>
using namespace std;
long long Trailing_Zeroes(long long num)
{
	long long cnt = 0;
	int x = 1;
	long long y = pow(5 , x);
	while(y<=num)
	{
		y = pow(5 , x);  
		cnt += num/y;
		x++;
	}
	return cnt;
} 
int main()
{
	long long num;
	cin>>num;
	long long Num_Of_Zeroes = Trailing_Zeroes(num);
	cout<<Num_Of_Zeroes;
	
}
// Time complexity : O(log(n)) , space complexity : O(1)
