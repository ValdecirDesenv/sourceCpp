/*
 * TwoSumCh01.cpp
 *
 *  Created on: Apr. 7, 2024
 *      Author: vdc

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 */

#include <TwoSumCh01.h>
#include <vector>
using namespace std;

TwoSumCh01::TwoSumCh01() {
	// TODO Auto-generated constructor stub

}

TwoSumCh01::~TwoSumCh01() {
	// TODO Auto-generated destructor stub
}


std::vector<int> TwoSumCh01::twoSum (std::vector<int>& nums, int target){
	std::vector<int> index= {0,0};
	int element,next = 0;
	for(int i=0; i< nums.size() - 1 ; i++){
		element= nums[i];
		index[0] = i;
		next = target - element;
		if (next > 0){
			for(int j=1; j< nums.size(); j++){
				if (next == nums[j]){
					index[1]=j;
					return index;
				}
			}
		}
	}
	return index;

}



