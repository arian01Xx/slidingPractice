#ifndef SOLUTION_ONE_HPP 
#define SOLUTION_ONE_HPP

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

class SolutionOne{
public:
	double findMaxAverage(std::vector<int>& nums, int k){
		double currSum=0, maxSum=0;
		for(int i=0; i<k; i++){
			currSum+=nums[i];
			maxSum=currSum;
		}
		for(int i=k; i<nums.size(); i++){
			currSum+=nums[i]-nums[i-k];
			maxSum=std::max(maxSum, currSum);
		}
		return maxSum/k;
	}
	/*
	example=
	Input: nums = [1,12,-5,-6,50,3], k = 4
    Output: 12.75000
    Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
	*/
};

#endif // SOLUTION_ONE_HPP