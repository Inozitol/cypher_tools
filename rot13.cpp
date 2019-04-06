#include "rot13.h"

void ROT13::encrypt(std::string input){
	_input = input;
	for(int i=0;i<input.length();i++){
		if((input[i]>=65 && input[i]<=90) || (input[i]>=97 && input[i]<=122)){
			if((input[i]>=65 && input[i]<=77) || (input[i]>=97 && input[i]<=109)) input[i]+=13;
			else
			if((input[i]>=78 && input[i]<=90) || (input[i]>=110 && input[i]<=122)) input[i]-=13;
		}
	}
	_output = input;
}
