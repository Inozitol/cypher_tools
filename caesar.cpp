#include "caesar.h"

void Caesar::encrypt(std::string input,int shift){
	_input = input;
	for(int i=0;i<input.length();i++){
		if((input[i]>=65 && input[i]<=90) || (input[i]>=97 && input[i]<=122)){
			input[i]+=shift;
			if(_input[i]>=65 && _input[i]<=90){
				while(input[i]>90)
					if(input[i]>90) 
						input[i]-=26;
			}else{
				if(_input[i]>=97 && _input[i]<=122){
					while(input[i]>122)
						if(input[i]>122) 
							input[i]-=26;

				}
			}
			
		}
	}
	_output = input;
}
