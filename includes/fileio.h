/*
* fileio.h
* Version: 9/24/2020
* Creator: Felix Phommachanh
*
*/

#ifndef FILEIO_H_
#define FILEIO_H_


#include "constants.h"
#include <vector>


int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif /* FILEIO_H_ */
