#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

class SolutionThree{
public:
	int longestOnes(std::vector<int>& nums, int k){
		int left=0;
		int right=0;
		int maxLength=0;
		int zeroCount=0;
		while(right<nums.size()){
			if(nums[right]==0){
				zeroCount++;
			}
			while(zeroCount>k){
				if(nums[left]==0){
					zeroCount--;
				}
				left++;
			}
			maxLength=std::max(maxLength, right-left+1);
			right++;
		}
		return maxLength;
	}
	/*
	Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
    Output: 6
    Explanation: [1,1,1,0,0,1,1,1,1,1,1]
    Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
	*/
};

#endif // SOLUTION_THREE_HPP