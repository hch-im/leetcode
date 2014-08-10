#include <gtest/gtest.h>

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