/*
* fileio.h
* Version: 9/24/2020
* Creator: Felix Phommachanh
*
*/

#ifndef FILEIO_H_
#define FILEIO_H_

#include <vector>
#include "constants.h"

int loadData(const std::string filename, vector<process> &myProcesses);
int saveData(const std::string filename, vector<process> &myProcesses);

#endif /* FILEIO_H_ */
