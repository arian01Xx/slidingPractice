#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

class SolutionTwo{
public:
	int maxVowels(std::string s, int k){
		int output=0;
		std::map<char,int> mp;
		for(int i=0; i<k; i++){
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
				mp[s[i]]++;
			}
		}
		output=std::max(output,mp['a']+mp['e']+mp['i']+mp['o']+mp['u']);
		int j=0;
		for(int i=k; i<(int)s.size(); i++){
			mp[s[j]]--;
			mp[s[j]]=std::max(0,mp[s[j]]);
			mp[s[i]]++;
			output=std::max(output,mp['a']+mp['e']+mp['i']+mp['o']+mp['u']);
			j++;
		}
		return output;
	}
	/*
	Input: s = "abciiidef", k = 3
    Output: 3
    Explanation: The substring "iii" contains 3 vowel letters.
	*/
};

#endif // SOLUTION_TWO_HPP