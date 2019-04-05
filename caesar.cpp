#include "caesar.h"

void Caesar::encrypt(std::string input,int shift){
	for(int i=0;i<input.length();i++){
		if(input[i]!=' '){
			input[i]+=shift;
			while(input[i]<65 || input[i]>90)
				if(input[i]<65 || input[i]>90) 
					input[i]-=26;
		}
	}
	_output = input;
}
