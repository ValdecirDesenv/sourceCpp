/*
 * MergeAlternately.h
 *
 *  Created on: Apr. 5, 2024
 *      Author: vdc
 */

#ifndef MERGEALTERNATELY_H_
#define MERGEALTERNATELY_H_

class MergeAlternately {
public:
	MergeAlternately(); // Constructor
	virtual ~MergeAlternately();// Destructor
	// Merge method declaration
	std::string merge(const std::string& str1, const std::string& str2);

};

#endif /* MERGEALTERNATELY_H_ */
