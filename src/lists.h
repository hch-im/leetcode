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
};

#endif