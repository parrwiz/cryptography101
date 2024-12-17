#include <iostream>
#include <unordered_map>
#include "encryption.h"
#include "mapping.h"
#include "utils.h"

using namespace std;

unordered_map<char, char>encryptMap;
unordered_map<char, char>decryptMap;


//main func
int main(){
//	char input[256];
string input;
	std::cout<<"\t\tCryptoGraphy 101"<<endl;
	std::cout<<"********************************"<<endl;
	std::cout<<"Enter a string: ";
	std::cin>>input;
generateMapping(encryptMap,decryptMap);
	string encrypted="";
//string encrypted="";
	for(char c:input){
		if(encryptMap.find(c)!=encryptMap.end()){
			encrypted+=encryptMap[c];
	}else{
		encrypted+=c;
	}
}
std::cout<<"Encrypted text: "<<encrypted<<endl;
string decrypted="";
for(char c:encrypted){
	if(decryptMap.find(c)!=decryptMap.end()){
	decrypted+=decryptMap[c];
	}else{
		decrypted+=c;
}
}
std::cout<<"Decrypted text: "<<decrypted<<endl;
	return 0;
}
	