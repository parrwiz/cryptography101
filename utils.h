#ifndef UTILS_H
#define UTILS_H
#include <ctime>
#include <cstdlib>

inline void initializeRandomSeed(){
	srand(time(0));
}
#endif
