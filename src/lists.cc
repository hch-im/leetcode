#include "lists.h"

//merge two sorted list
ListNode * Lists::mergeSortedList(ListNode * left, ListNode * right){
	ListNode * head = new ListNode(0);
	ListNode * ptr = head;

	while(left != NULL && right != NULL){
		if(left->val < right->val){
			ptr->next = left;
			left = left->next;
		}else{
			ptr->next = right;
			right = right->next;
		}
		ptr = ptr->next;
		ptr->next = NULL;		
	}

	if(left != NULL)
		ptr->next = left;
	else
		ptr->next = right;

	ptr = head->next;
	delete head;
	return ptr;
}

int Lists::length(ListNode * head){
	int len = 0;
	while(head != NULL){
		len++;
		head = head->next;
	}

	return len;
}

//merge the first n nodes that start from head
//next points to the next node
ListNode * Lists::mergeNodes(ListNode * head, ListNode ** next, int n){
    if(n <= 0) return NULL;

    if(n == 1){
    	*next = (*next)->next;
    	head->next = NULL;
    	return head;
    }

    int left = n / 2, right = n - left;    	
    ListNode * leftNode = mergeNodes(head, next, left);
    ListNode * rightNode = mergeNodes(*next, next, right); 
    return mergeSortedList(leftNode, rightNode);
}

//merge sort
ListNode * Lists::sortList(ListNode * head){
	int len = length(head);
	if(len <= 1) return head;

	return mergeNodes(head, &head, len);
}