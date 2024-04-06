/*
 * MergeAlternately.cpp
 *
 *  Created on: Apr. 5, 2024
 *      Author: vdc
 */
#include <iostream>
#include <string>
#include <MergeAlternately.h>

MergeAlternately::MergeAlternately() {
	// TODO Auto-generated constructor stub
}

MergeAlternately::~MergeAlternately() {
	// TODO Auto-generated destructor stub
}

std::string MergeAlternately::merge(const std::string& str1, const std::string& str2) {
    size_t len1 = str1.length();
    size_t len2 = str2.length();

    size_t maxLength = len1 > len2 ? len1 : len2;

    std::string mergedString;

    for (size_t i = 0; i < maxLength; ++i) {
        if (i < len1) {
            mergedString += str1[i];
        }else {
        	mergedString += ' ';
        }
        if (i < len2) {
            mergedString += str2[i];
        }else {
        	mergedString += ' ';
        }
    }

    std::cout << "Merged String: " << mergedString << std::endl;
    return mergedString;
}
