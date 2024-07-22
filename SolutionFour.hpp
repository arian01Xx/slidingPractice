#ifndef SOLUTION_FOUR_HPP
#define SOLUTION_FOUR_HPP

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

class SolutionFour{
public:
	int longetSubarray(std::vector<int>& nums){
		std::vector<int> v;
		int ans=0;
		for(int i=0; i<nums.size(); i++){
			if(nums[i]==0){
				v.push_back(i); //el secreto esta en que guarda el indice
			}
		}
		if(v.size()<2){
			return nums.size()-1;
		}else{
			int x=v[0], y=nums.size()-v[v.size()-1]-1;
			int m=v[1]-v[0]-1+x;
			for(int i=1; i<v.size()-1; i++){
				int k=v[i+1]-v[i-1]-2;
				m=std::max(m,k);
			}
			m=std::max(m,v[v.size()-1]-v[v.size()-2]-1+y);
			ans=m;
		}
		if(ans<0) return 0;
		else return ans;
	}
	/*
	Input: nums = [0,1,1,1,0,1,1,0,1]
    Output: 5
    Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].
	*/
};

#endif // SOLUTION_FOUR_HPP