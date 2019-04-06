#include "keyed.h"

void Keyed::encrypt(std::string input, std::string key){
	_input=input;
	std::string alph;
	transform(key.begin(), key.end(), key.begin(), ::toupper);
	for(int i=0;i<key.length();i++){
		if(key[i]!=' '){
			if(alph.find(key[i])==std::string::npos) alph+=key[i];
		}
	}
	if(alph.length()!=26){
		char fill_buff = 'A';
		for(int i=alph.length();i<=26;i++){
			while(fill_buff<='Z'){
				if(alph.find(fill_buff)==std::string::npos) alph+=fill_buff;
				else fill_buff++;
				
			}
		}
	}
	for(int i=0;i<input.length();i++){
		if(input[i]>=65 && input[i]<=90){
			input[i]=alph[input[i]-65];
		} else {
			if(input[i]>=97 && input[i]<=122){
				input[i]=alph[input[i]-97]+32;
			}
		}
	}
	_output=input;
}
