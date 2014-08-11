#include "common_test.h"
#include "lists.h"

TEST(Lists, sortList){
	Lists l;
	int A[] = {7, 2, 1, 8, 9, 0};
	int A_r[] = {0, 1, 2, 7, 8, 9};
	ListNode * head = arrayToList(A, 6);
	head = l.sortList(head);
	EXPECT_TRUE(ListEqual(A_r, 6, head));
}