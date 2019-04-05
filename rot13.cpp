#include "rot13.h"

void ROT13::encrypt(std::string input){
	for(int i=0;i<input.length();i++){
		if(input[i]!=' '){
			if(input[i]>=65 && input[i]<=77) input[i]+=13;
			if(input[i]>=78 && input[i]<=90) input[i]-=13;
		}
	}
}
