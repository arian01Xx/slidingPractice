#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include "SolutionOne.hpp"
#include "SolutionTwo.hpp"
#include "SolutionThree.hpp"
#include "SolutionFour.hpp"

int main(){

	std::vector<int> inputOne={1,12,-5,-6,50,3};
	int kone=4;
	SolutionOne solution1;
	double outputOne=solution1.findMaxAverage(inputOne,kone);
	std::cout<<outputOne<<std::endl;

	std::string s="abciiidef";
	int k=3;
	SolutionTwo solution2;
	int outputTwo=solution2.maxVowels(s,k);
	std::cout<<outputTwo<<std::endl;

	SolutionThree solution3;
	std::vector<int> inputThree={1,1,1,0,0,0,1,1,1,1,0};
	int kk=3;
	int outputThree=solution3.longestOnes(inputThree,kk);
	std::cout<<outputThree<<std::endl;

	SolutionFour solution4;
	std::vector<int> inputFour={0,1,1,1,0,1,1,0,1};
	int outputFour=solution4.longetSubarray(inputFour);
	std::cout<<outputFour<<std::endl;
}