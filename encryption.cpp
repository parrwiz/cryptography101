#include "encryption.h"
#include "utils.h"
#include <algorithm>

#include <random>
 
void generateMapping(std::unordered_map<char, char>& encryptMap, std::unordered_map<char, char>& decryptMap) {
    std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    std::string symbols = "3456789-=~!@#$%^&*()_+|?><:{}[]";
    
    initializeRandomSeed();  // Initialize random seed
    std::random_shuffle(symbols.begin(), symbols.end());

    for (int i = 0; i < chars.length(); i++) {
        encryptMap[chars[i]] = symbols[i];
        decryptMap[symbols[i]] = chars[i];
    }
}