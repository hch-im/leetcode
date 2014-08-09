#ifndef SINGLENUMBER_H_
#define SINGLENUMBER_H_

#include "common.h"

class SingleNumber{
public:
/*
Given an array of integers, every element appears twice except for one. 
Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you imple-
ment it without using extra memory?
 */	
	int singleNumber(int A[], int n);
/* 
Given an array of integers, every element appears three times except for 
one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implem-
ent it without using extra memory?
 */	
	int singleNumberII(int A[], int n);
};

#endif