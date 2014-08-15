#include "maths.h"

/*
	The process to calculate sqrt.
	1. convert the number into binary.
	2. From right to left group two consecutive bits together.
	3. Let binary(x) = binary(p << 1) + binary(q) 
	   Let p = 0
	   Let remain = 0
	   Process each bits group from left to right.
	4. val = remain << 2 + bits-group(i)
	   p = p << 1  
	   if (p<<1 + 1) <= val
	      remain = val - (p << 1 + 1)
	      p = p + 1
	   else
		  remain = val	   
*/
int Maths::sqrt(int x){
	if(x <= 0)
		return 0;
	int i = sizeof(int) * 8 - 2;
 	int p = 0;
 	int remain = 0;
 	int val1, val2;
 	
 	while(x >> i == 0)
 		i -= 2;

 	for(; i >= 0; i -= 2){
 		val1 = (remain << 2) + ((x >> i) & 0x3);
 		val2 = (p << 2) + 1;
 		p <<= 1;
 		if(val1 >= val2){
 			remain = val1 - val2;
 			p += 1;
 		}else
 			remain = val1;
 	}
    return p;
}
