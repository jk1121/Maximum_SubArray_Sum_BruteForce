/*
	Created By : Jatin Khattar
*/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

int MaximumSubarraySum_BruteForce(int *A,int n)
{
	int max_sum = A[0];
	int sum;
	for(int i=0;i<n;i++)
	{
		sum = 0;
		for(int j=i;j<n;j++)
		{
			sum+=A[j];
			if(sum>max_sum)
				max_sum =  sum;
		}
	}
	return max_sum;
}
int main(void)
{
	int A[]={-20, -5, -6, -2, 3, -10, -5, -6};
	int n = sizeof(A)/sizeof(A[0]);
	cout<<MaximumSubarraySum_BruteForce(A,n);
}

