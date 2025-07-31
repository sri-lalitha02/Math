// Factors_of_number
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> Factors1(int num)
{
	vector<int>arr;
	for(int i = 1 ; i <= num ; i++)
	{
		if(num%i == 0) arr.push_back(i);
	}
	return arr;
}
// time complexity : O(n) , space complexity = O(1)
vector<int> Factors2(int num)
{
	vector<int>arr;
	for(int i = 1 ; i*i <= num ; i++)
	{
		if(num%i==0)
		{
			if(num/i == i) // if divisiors are equal then print only one time
			{
				arr.push_back(i) ;
			}
			else //if divisiors are not equal then print both of them
			{
				arr.push_back(i);
				arr.push_back(num/i);
			}
		}
	}
	return arr;
}
// time complexity : O(sqrt(n)) , space complexity = O(1)
int main()
{
	int num; 
	scanf("%d" , &num);
	vector<int>arr = Factors1(num);
	for(int i : arr)
	{
		cout << i <<" ";
	}
	cout<<"\n";
	vector<int>arr1 = Factors2(num);
	for(int i : arr1)
	{
		cout<< i << " " ;
	}
}
