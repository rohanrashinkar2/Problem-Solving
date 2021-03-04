#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % (nums.size());
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

int main()
{
	vector<int>v;
	int n,k;
	cout<<"Enter the size of vector : ";   cin>>n;
	for(int i = 0; i < n ; i++){
		cout<<"Enter number "<<i+1<<" : ";  int b;  cin>>b;   v.push_back(b);
	}
	
	cout<<"Enter the value of the k : "; cin>>k;
	
	Solution s;
	s.rotate(v,k);
	
	for(int i = 0 ; i < n ; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}







