#ifndef COMMON_TEST_H_
#define COMMON_TEST_H_

#include <gtest/gtest.h>
#include "common.h"

template<typename T, size_t size>
::testing::AssertionResult ArrayEqual(const T (&expected)[size],
	const T (&actual)[size]){
    for (size_t i = 0; i < size; i++){
    	if (expected[i] != actual[i]){
    		return ::testing::AssertionFailure() << "actual[" << i
            	<< "] = " << actual[i] << " does not equal to expected[" << i
            	<< "] = " << expected[i];
    	}
    }
    return ::testing::AssertionSuccess();
}

::testing::AssertionResult ListEqual(int expected[], int size, ListNode * head);

#endif