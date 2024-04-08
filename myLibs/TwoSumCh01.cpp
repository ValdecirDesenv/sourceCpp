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
#include <unordered_map>

using namespace std;

TwoSumCh01::TwoSumCh01() {
	// TODO Auto-generated constructor stub

}

TwoSumCh01::~TwoSumCh01() {
	// TODO Auto-generated destructor stub
}

/*
 * Time Complexity: The time complexity of this implementation is O(n^2)
 * where n is the size of the input vector nums. This is because it uses nested
 * loops to iterate over the elements of nums.
 * Space Complexity: The space complexity of this implementation is O(1),
 * as it only uses a fixed-size vector index to store the result.*/

/// @param nums
/// @param target
/// @return
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
/*
 * This implementation has a time complexity of O(n) and a
 * space complexity of O(n), making it more efficient than the twoSum
 * implementation for larger input sizes.
 * */
/// @param nums
/// @param target
/// @return
std::vector<int> TwoSumCh01::twoSumEfficient (std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap; // Map to store number-index pairs

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; // Calculate the complement for current number
        if (numMap.find(complement) != numMap.end()) { // If complement found in the map
            return {numMap[complement], i}; // Return indices of complement and current number
        }
        numMap[nums[i]] = i; // Store the current number-index pair in the map
    }

    // If no solution found, return an empty vector
    return {};
}
