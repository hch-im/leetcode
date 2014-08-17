#ifndef LISTS_H_
#define LISTS_H_

#include "common.h"

class Lists{

public:
	ListNode * sortList(ListNode * head);
	ListNode * mergeSortedList(ListNode * left, ListNode * right);
	int length(ListNode * head);	
private:
	ListNode * mergeNodes(ListNode * head, ListNode ** next, int n);
/*
Swap Nodes in Pairs

Given a linked list, swap every two adjacent nodes and return its head.

For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.

Your algorithm should use only constant space. You may not modify the 
values in the list, only nodes itself can be changed.
*/	
	ListNode *swapPairs(ListNode *head);
};

#endif