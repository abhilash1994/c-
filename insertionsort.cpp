#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#define EPSILON 0.0000001

using namespace std;
int main(){
	int i,j,n;
	scanf("%d",&n);
	int a[n];

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = i; j > 0; --j)
		{
			/* code */
			if (a[j-1]>a[j])
			{
				int b = a[j-1];
				a[j-1] = a[j];
				a[j] = b;
			}

			j=j-1;

		}
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<a[i];
	}
	return 0;
}