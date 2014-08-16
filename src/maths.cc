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

int Maths::atoi(const char *str){
	if(str == NULL || *str == 0)
		return 0;
	
	const char * p = str;
	while(*p == ' ')
		p++;

	int result = 0;
	int ch;
	bool negative = false;
	if(*p == '-'){
		negative = true;
		p++;
	}else if(*p == '+'){
		p++;
	}
//	cout<<" \r\n "<<str<<endl;
	while(*p != 0){
		ch = *(p++) - '0';
		if(ch > 9 || ch < 0)
			break;
		//overflow check
		int tmp = result * 10 + ch;
		//use minus method to detect overflow
		if(INT_MAX/10 < result || INT_MAX - ch < result * 10){
			if(negative){
				result = INT_MIN;
			}else{
				result = INT_MAX;
			}
			break;
		}
		result = tmp;	
//		cout<<result<<endl;	
	}

	return negative ? result * -1 : result;
}
