#include "common_test.h"

::testing::AssertionResult ListEqual(int expected[], int size, ListNode * head){
	ListNode * ptr = head;
    for (int i = 0; i < size; i++, ptr = ptr->next){
    	if(ptr == NULL)
    		return ::testing::AssertionFailure() << "expected[" << i
    			<< "] = " << expected[i] << ", but acutal value is null.";
    	if (expected[i] != ptr->val){
    		return ::testing::AssertionFailure() << "expected[" << i
            	<< "] = " << expected[i] << " does not equal to the acutal value at "<< i << " : "
            	<< ptr->val;
    	}
    }	
    return ::testing::AssertionSuccess();	
}