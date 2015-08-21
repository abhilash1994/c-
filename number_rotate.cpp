#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

   	void rotate(vector<int>& nums, int k) {
        
        for(int i=0;i<k;i++)
        {
            nums.insert(nums.begin(), nums.back());
            nums.pop_back();
        }
    }


int  main()
{
	/* code */
	std::vector<int> v(8);
	for (int i = 0; i < 8; ++i)
	{
		v[i] = i;
		cout<<v[i];
	}

	rotate(v,4);
	cout<<"\n";
	for (int i = 0; i < 8; ++i)
	{
		cout<<v[i];		/* code */
	}
	return 0;
}

